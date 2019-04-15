
#include <vector>
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
int main()
{
	
	using namespace Graph_lib;
	
	crearNodo(10,'a');
	crearNodo(54,'b');
	crearNodo(36,'c');
	crearNodo(3,'d');
	nodos[2]->sig = nodos[3];
	nodos[0]->sig = nodos[2];

	abrirVentanaHeap();


};


