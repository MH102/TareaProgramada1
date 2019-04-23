#include "Paraser.h"
#include "Tokenizador.h"
#include "LinePointer.h"
#include <random>
Node* nodos[28];
void crearNodo(int x,char nombre,Text &ops) {
	Node* h = new Node(x, 1,nombre);
	for (int i = 0; i < 28; i++) {
		if (nodos[i] == 0) {
			nodos[i] = h;
			h->setPos(i + 1);
			ops.set_label("Nodo creado");
			return;
		}
	}
	ops.set_label("Operacion fallida (Overflow)");
	return;
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
void asignarNombre(int i,int x) {
	Node * h = new Node(x, i+1);
	delete(nodos[i]);
	nodos[i] = h;
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
void limpiarHeap() {
	for (int i = 0; i < 28; i++) {
		delete(nodos[i]);
		nodos[i] = 0;
	}
}
void setSiguiente(char c1, char c2, int x1, int x2, int n1, bool esnum, bool esnew, Text &ops) {
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
	if (h1 || h2) {
		
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
			crearNodo(n1, '?', ops);
			for (int i = 0; i < 28; i++) {
				if (nodos[i]) {
					if (nodos[i]->getNombre() == '?') {
						asignarNombre(i, n1);
						h1->sig = nodos[i];
						break;
					}
				}
			}
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
vector<string> dividir(string tira) {
	string final;
	vector<string> vec;
	for (int i = 9 ; i < tira.size(); i++) {
		if (tira.at(i) == ';') {
			vec.push_back(final);
			final = "";
		}
		else {
			final += tira.at(i);
		}
	}
	vec.push_back(final);
	return vec;
}
void whileasig(char nom, Text &ops) {
	Node* asignado = 0;
	for (int i = 0; i < 28; i++) {
		if (nodos[i]) {
			if (nodos[i]->getNombre() == nom) {
				asignado = nodos[i];
			}
		}
	}
	int cont = 0;
	while (asignado) {
		cont++;
		asignado = asignado->sig;
	}
	std::string msj = "Ciclo realizado " + std::to_string(cont) + " veces";
	ops.set_label(msj);
}
void repeat(char nom, int repet, int val, Text& ops) {

	int cont = 0;
	for (int i = 0; i < repet; i++) {
		cont++;
		crearNodo(val, nom, ops);
	}
	std::string msj = "Ciclo realizado " + std::to_string(cont) + " veces";
	ops.set_label(msj);
}
void parseNewNodo(Parser parser, vector<Token> parseTree, int heapback, Text &ops) {
	if (heapback == 0) {
			if (parseTree.at(5).tokenC == '_') {
				int random = generarNumeroAleatorio();
				crearNodo(random, parseTree.at(0).tokenS[0], ops);
			}
			else {
				crearNodo(parseTree.at(5).num, parseTree.at(0).tokenS[0], ops);
			}
		}
	else {
		if (parseTree.at(5).tokenC == '_') {
			int random = generarNumeroAleatorio();
			nodos[heapback - 1] = new Node(random, heapback, parseTree.at(0).tokenS[0]);
			heapback--;

		}
		else {
			nodos[heapback - 1] = new Node(parseTree.at(5).num, heapback, parseTree.at(0).tokenS[0]);
			heapback--;
		}
	}
}
void parseAsignacion(Parser parser, vector<Token> parseTree,Text &ops) {
	bool esnum = false;
	bool esnew = false;
	int ciclo = 0;
	int ciclo2 = 0;
	char c1 = parseTree.at(0).tokenS[0];
	char c2 = '0';
	int n1;
	for (int i = 0; i < parseTree.size(); i++) {
		if (parseTree.at(i).tokenS == "sig") {
			ciclo++;
		}
		if (parseTree.at(i).tokenC == '=' && parseTree.at(i).demeTipo() == operador) {
			i++;
			if (parseTree.at(i).tipo == numero) {
				c2 = parseTree.at(i).num;
				esnum = true;
			}
			else {
				if (parseTree.at(i).tokenS == "new" && parseTree.at(i + 1).tokenS == "Nodo") {
					if (parseTree.at(i + 3).tokenC == '_') {
						n1 = generarNumeroAleatorio();
					}
					else {
						n1 = parseTree.at(i + 3).num;
					}
					esnew = true;
					cout << c2 << endl;
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
			setSiguiente(c1, c2, ciclo, ciclo2, n1, esnum, esnew, ops);
			break;
		}
	}
}
void parseValor(Parser parser, vector<Token> parseTree, Text &ops) {
	if (parseTree.at(2).num != 0) {
		asignarValor(parseTree.at(2).num, parseTree.at(0).tokenS[0], ops);
	}
	else {
		borrarNodo(parseTree.at(0).tokenS[0], ops);
	}
}
void parseNodoNodo(Parser parser, vector<Token> parseTree, Text &ops) {
	Node * h1 = 0;
	Node * h2 = 0;
	int pos;
	int x;
	char nombre;
	for (int i = 0; i < 28; i++) {
		if (nodos[i]) {
			if (nodos[i]->getNombre() == parseTree.at(0).tokenS[0]) {
				h1 = nodos[i];
				pos = i;
			}
			if (nodos[i]->getNombre() == parseTree.at(2).tokenS[0]) {
				h2 = nodos[i];
				nombre = h2->getNombre();
				x = h2->getValor();
			}
		}
	}
	if (h1 && h2) {

		nodos[pos] = 0;
		delete(h1);
		crearNodo(x, nombre, ops);
		nodos[h2->getPos() - 1] = 0;
		delete(h2);
	}
	else {
		ops.set_label("Operacion fallida");
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
	int heapback = 0;
	while (true) {
		win2.wait_for_button();
		std::string input = textbox.value();
		std::cout << input;
		if (input == "heap") { abrirVentanaHeap(); continue; }
		if (input == "exit") { break; }
		if (input == "limpiar heap") { limpiarHeap(); continue; }
		Tokenizador tokenizador(input);
		Token t = tokenizador.demeToken();
		while (t.demeTipo() != nulo) {
			std::cout << t;
			parseTree.push_back(t);
			t = tokenizador.demeToken();
		}
		parseTree.push_back(t);
		cout << parser.Parse(parseTree) << endl;
		if (parser.Parse(parseTree) == "heapback") {
			heapback = parseTree.at(1).num;
		}
		/*if (parser.Parse(parseTree) == "repeat") {
			int repeats = parseTree.at(2).num;
			Vector<Token> parseTree2;
			vector<string> vec = dividir(input);
			while (repeats != 0) {
				for(int i = 0; i < vec.size(); i++){
					Tokenizador tokenizador2(vec.at(i));
					Token t2 = tokenizador2.demeToken();
					cout << parser.Parse(parseTree2) << endl;
					while (t2.demeTipo() != nulo) {
						std::cout << t2;
						parseTree2.push_back(t2);
						t2 = tokenizador2.demeToken();
					}
					parseTree2.push_back(t2);
					if (parser.Parse(parseTree2) == "New Nodo") {
						parseNewNodo(parser, parseTree2, heapback, ops);
					}
					if (parser.Parse(parseTree2) == "asignacion") {
						parseAsignacion(parser, parseTree2, ops);
					}
					if (parser.Parse(parseTree2) == "valor") {
						parseValor(parser, parseTree2, ops);
					}
					if (parser.Parse(parseTree2) == "Nodo a Nodo") {
						parseNodoNodo(parser, parseTree2, ops);
					}
				}
				repeats--;
			}
		}
		*/
		if (parser.Parse(parseTree) == "false") {
			ops.set_label("Operacion no reconocida");
		}
		if (parser.Parse(parseTree) == "New Nodo") {
			parseNewNodo(parser, parseTree, heapback, ops);
		}
		if (parser.Parse(parseTree) == "asignacion") {
			parseAsignacion(parser, parseTree, ops);
		}
		if (parser.Parse(parseTree) == "valor") {
			parseValor(parser, parseTree, ops);
		}
		if (parser.Parse(parseTree) == "Nodo a Nodo") {
			parseNodoNodo(parser, parseTree, ops);
		}
		if (parser.Parse(parseTree) == "Whileasig") {
			char c1;
			c1 = parseTree.at(2).tokenS[0];
			whileasig(c1, ops);
		}
		if (parser.Parse(parseTree) == "Repeat") {
			char c1;
			int repeet;
			c1 = c1 = parseTree.at(3).tokenS[0];
			if (parseTree.at(5).tokenC == '_') {
				int random = generarNumeroAleatorio();
				cout << random << endl;
				repeet = std::stoi(parseTree.at(3).tokenS);
				repeat(c1, repeet, random, ops);
			}
			else {
				repeet = std::stoi(parseTree.at(3).tokenS);
				repeat(c1, repeet, parseTree.at(9).num, ops);
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
int main()
{
	inicializarNodos();
	abrirVentanaComandos();

};

