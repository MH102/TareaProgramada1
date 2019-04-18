
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
	Point tl2(100, 100);
	Simple_window win2(tl2, 500, 200, "Grid");
	int x_size = win2.x_max();
	int y_size = win2.y_max();
	int x_grid = 100;
	int y_grid = 100;
	Fl_Input textbox(10, 170, 200, 23, 0);
	win2.add(textbox);
	Vector<Token> parseTree;
	

	win2.wait_for_button();
	std::string input = textbox.value();
	std::cout << input;
	Tokenizador tokenizador(input);
	Token t=tokenizador.demeToken();
	while (t.demeTipo()!= nulo) {
		std::cout << t;
		parseTree.push_back(t);
		t = tokenizador.demeToken();
	}
	parseTree.push_back(t);
	std::cout << t;
	cout << t.tokenS;
}
int main()
{
	
	using namespace Graph_lib;
	
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

