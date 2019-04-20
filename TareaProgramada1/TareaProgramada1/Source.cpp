
#include "Tokenizador.h"
#include "LinePointer.h"
Node* nodos[28];
void crearNodo(int x,char nombre) {
	Node* h = new Node(x, 1,nombre);
	for (int i = 0; i < 28; i++) {
		if (nodos[i] == 0) {
			nodos[i] = h;
			h->setPos(i + 1);
			return;
		}
	}
	return;
}
void borrarNodo(char c) {
	for (int i = 0; i < 28; i++) {
		if (nodos[i]->getNombre() == c) {
			delete(nodos[i]);
			nodos[i] = 0;
			return;
		}
	}
	return;
}
void setSiguiente(char c1, char c2) {
	Node* h1 = 0;
	Node* h2 = 0;
	for (int i = 0; i < 28; i++) {
		if (nodos[i]->getNombre() == c1) {
			h1 = nodos[i];
		}
		if (nodos[i]->getNombre() == c2) {
			h2 = nodos[i];
		}
	}
	if(h1 && h2)h1->sig = h2;
	return;
}
int generarNumeroAleatorio() {
	int num = rand() % static_cast<int>(100);
	return num;
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
}

void abrirVentanaComandos() {
	using namespace Graph_lib;
	Point tl2(100, 100);
	Simple_window win2(tl2, 500, 200, "Grid");
	int x_size = win2.x_max();
	int y_size = win2.y_max();
	int x_grid = 100;
	int y_grid = 100;
	Fl_Input textbox(10, 170, 200, 23, 0);
	win2.add(textbox);
	Vector<Token> parseTree;
	while (true) {
		win2.wait_for_button();
		std::string input = textbox.value();
		std::cout << input;
		if (input == "heap") { abrirVentanaHeap(); continue; }
		Tokenizador tokenizador(input);
		Token t = tokenizador.demeToken();
		while (t.demeTipo() != nulo) {
			std::cout << t;
			parseTree.push_back(t);
			t = tokenizador.demeToken();
		}
		parseTree.push_back(t);
		std::cout << t;
		cout << t.tokenS;
	}
}
void callback1(Fl_Widget*, void*) {
	ofstream out{ "collisions_vs_time.txt" };
	out << "test" << endl;
}
int main()
{
	
	crearNodo(10, 'a');
	crearNodo(54, 'b');
	crearNodo(36, 'c');
	crearNodo(3, 'd');
	crearNodo(41, 'l');
	crearNodo(31, 'k');
	crearNodo(3, 'g');
	crearNodo(54, 'm');
	crearNodo(36, 't');
	crearNodo(3, 'n');
	nodos[2]->sig = nodos[3];
	nodos[8]->sig = nodos[9];

	

	

	abrirVentanaComandos();

};

