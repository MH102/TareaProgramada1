#include "Paraser.h"
#include "Tokenizador.h"
#include "LinePointer.h"
#include <random>
Node* nodos[28];
Node * crearNodo(int x,char nombre,Text &ops) {
	Node* h = new Node(x, 1,nombre);
	for (int i = 0; i < 28; i++) {
		if (nodos[i] == 0) {
			nodos[i] = h;
			h->setPos(i + 1);
			ops.set_label("Nodo creado");
			return h;
		}
	}
	ops.set_label("Operacion fallida");
	return h;
}
void asignarValor(int x, char nombre, Text &ops) {
	Node* h = new Node(x,1,nombre);
	for (int i = 0; i < 28; i++) {
		if (nodos[i]) {
			if (nodos[i]->getNombre() == nombre) {
				delete(nodos[i]);
				h->setPos(i);
				nodos[i] = h;
				ops.set_label("Valor asignado");
				return;
			}
		}
	}
	ops.set_label("Operacion fallida");
	return;
}
void borrarNodo(char c, Text &ops) {
	for (int i = 0; i < 28; i++) {
		if (nodos[i]) {
			if (nodos[i]->getNombre() == c) {
				delete(nodos[i]);
				nodos[i] = 0;
				ops.set_label("Nodo borrado");
				return;
			}
		}
	}
	ops.set_label("Operacion fallida");
	return;
}
void setSiguiente(char c1, char c2, int x1, int x2, bool esnum, bool esnew, Text &ops) {
	Node* h1 = 0;
	Node* h2 = 0;
	for (int i = 0; i < 28; i++) {
		if (nodos[i]) {
			if (nodos[i]->getNombre() == c1) {
				h1 = nodos[i];
			}
			if (nodos[i]->getNombre() == c2) {
				h2 = nodos[i];
			}
		}
	}
	if (h1 && h2) {
		
		while (x1 != 0 && h1) {
			if (x1 == 1) {
				break;
			}
			h1 = h1->sig;
			x1--;
		}
		while (x2 != 0 && h2) {
			h2 = h2->sig;
			x2--;
		}
		cout << esnew << endl;
		if (esnum) {
			if (c2 == 0) {
				h1->sig = NULL;
				ops.set_label("Siguiente asignado");
				return;
			}
			else {
				if (h1->sig) {
					asignarValor(c2, h1->sig->getNombre(), ops);
					ops.set_label("Siguiente asignado");
					return;
				}
				else {
					ops.set_label("Nodo nulo");
					return;
				}
			}
		}
		if (esnew) {
			cout << "aqui estoy" << endl;
			h1->sig = crearNodo(c2,0, ops);
			if (ops.label() == "Operacion fallida") {
				return;
			}
			ops.set_label("Nodo creado y asignado");
			return;
		}
		if (h1 && h2) {
			h1->sig = h2;
			ops.set_label("Siguiente asignado");
			return;
		}
	}
	ops.set_label("Operacion fallida");
	return;
}
int generarNumeroAleatorio() {
	std::random_device rd;
	std::mt19937 eng(rd());
	std::uniform_int_distribution<> distr(0, 99);
	return distr(eng);
}
void inicializarNodos() {
	for (int i = 0; i < 28; i++) {
		nodos[i] = 0;
	}
	return;
}
void abrirVentanaHeap() {
	Point tl(100, 100);
	Simple_window win(tl, 700, 400, "Grid");
	int x_size = win.x_max();
	int y_size = win.y_max();
	int x_grid = 100;
	int y_grid = 100;
	Lines grid;
	for (int x = x_grid; x < x_size; x += x_grid) {
		grid.add(Point(x, 0), Point(x, y_size));
	}
	for (int y = y_grid; y < y_size; y += y_grid) {
		grid.add(Point(0, y), Point(x_size, y));
	}
	grid.set_color(Color::blue);
	grid.set_style(Line_style::dot);
	win.attach(grid);
	for (int i = 0; i < 28; i++) {
		if (nodos[i] != 0) {
			nodos[i]->attach(win);
			draw_Line(nodos[i], win);
		}
	}
	win.wait_for_button();
	for (int i = 0; i < 28; i++) {
		if (nodos[i] != 0) {
			nodos[i]->detach(win);
		}
	}
}

void abrirVentanaComandos() {
	using namespace Graph_lib;
	Point tl2(100, 100);
	Simple_window win2(tl2, 500, 200, "Grid");
	Text ops(Point(200,25),"");
	ops.set_color(Color::black);
	ops.set_font(Font::times_bold);
	int x_size = win2.x_max();
	int y_size = win2.y_max();
	int x_grid = 100;
	int y_grid = 100;
	Fl_Input textbox(10, 170, 200, 23, 0);
	win2.add(textbox);
	win2.attach(ops);
	Vector<Token> parseTree;
	Parser parser;
	while (true) {
		win2.wait_for_button();
		std::string input = textbox.value();
		std::cout << input;
		if (input == "heap") { abrirVentanaHeap(); continue; }
		if (input == "exit") { break; }
		Tokenizador tokenizador(input);
		Token t = tokenizador.demeToken();
		while (t.demeTipo() != nulo) {
			std::cout << t;
			parseTree.push_back(t);
			t = tokenizador.demeToken();
		}
		parseTree.push_back(t);
		cout << parser.Parse(parseTree) << endl;
		if (parser.Parse(parseTree) == "false") {
			ops.set_label("Operacion no reconocida");
		}
		if (parser.Parse(parseTree) == "New Nodo") {
			if(parseTree.at(5).tokenC == '_'){			
				int random = generarNumeroAleatorio();
				cout << random << endl;
				crearNodo(random, parseTree.at(0).tokenS[0],ops);
			}
			else {
				crearNodo(parseTree.at(5).num, parseTree.at(0).tokenS[0],ops);
			}
		}
		if (parser.Parse(parseTree) == "asignacion") {
			bool esnum = false;
			bool esnew = false;
			int ciclo = 0;
			int ciclo2 = 0;
			char c1 = parseTree.at(0).tokenS[0];
			char c2 = '0';
			for (int i = 0; i < parseTree.size(); i++) {
				if (parseTree.at(i).tokenS == "sig") {
					ciclo++;
				}
				if (parseTree.at(i).tokenC == '=' && parseTree.at(i).demeTipo()==operador) {
					i++;
					if (parseTree.at(i).tipo == numero) { 
						c2 = parseTree.at(i).num;
						esnum = true;
					}
					else {
						cout << parseTree.at(i).tokenS << endl;
						if (parseTree.at(i).tokenS == "new" && parseTree.at(i+1).tokenS == "Nodo") {
							c2 = parseTree.at(i + 3).num;
							if (c2 == '_') {
								c2 = generarNumeroAleatorio();
							}
							esnew = true;
						}
						else {
							c2 = parseTree.at(i).tokenS[0];
						}
					}
					for (i; i < parseTree.size(); i++) {
						if (parseTree.at(i).tokenS == "sig") {
							ciclo2++;
						}
					}
					setSiguiente(c1, c2, ciclo, ciclo2, esnum, esnew, ops);
					break;
				}
			}
		}
		if (parser.Parse(parseTree) == "valor") {
			if (parseTree.at(2).num != 0) {
				asignarValor(parseTree.at(2).num, parseTree.at(0).tokenS[0], ops);
			}
			else {
				borrarNodo(parseTree.at(0).tokenS[0],ops);
			}
		}
		tokenizador = Tokenizador("reset reset");
		t = tokenizador.demeToken();
		while (t.demeTipo() != nulo) {
			parseTree.push_back(t);
			t = tokenizador.demeToken();
		}
		while (parseTree.size() != 0) {
			parseTree.pop_back();
		}
	}
}
void callback1(Fl_Widget*, void*) {
	ofstream out{ "collisions_vs_time.txt" };
	out << "test" << endl;
}
int main()
{
	
	abrirVentanaComandos();

};

