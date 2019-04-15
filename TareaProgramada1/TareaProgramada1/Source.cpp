
#include <vector>
#include "LinePointer.h"
vector<Node*> nodos;
void crearNodo(int x) {
	if (nodos.size() == 0) {
		Node *h = new Node(x, 1);
		nodos.push_back(h);
	}
	else {
		if (nodos.size() == 28) {
			return;
		}
		else {
			Node *t = nodos.at(0)->insert(x);
			nodos.push_back(t);

		}
	}

}

int main()
{
	
	using namespace Graph_lib;
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
	crearNodo(10);
	crearNodo(54);
	crearNodo(36);
	crearNodo(3);
	crearNodo(54);
	crearNodo(36);
	crearNodo(3);
	crearNodo(54);
	crearNodo(36);
	crearNodo(3);
	crearNodo(16);
	crearNodo(7);
	crearNodo(4);
	crearNodo(99);
	crearNodo(12);
	crearNodo(16);
	crearNodo(55);
	crearNodo(31);
	crearNodo(57);
	crearNodo(47);
	crearNodo(91);
	crearNodo(15);
	crearNodo(26);
	crearNodo(73);
	crearNodo(89);
	crearNodo(45);
	crearNodo(96);
	nodos.at(15)->sig = nodos.at(25);
	int a = nodos.at(22)->getPos();
	crearNodo(a);
	
	for (int i = 0; i < nodos.size(); i++) {
		nodos.at(i)->attach(win);
	}
	
	
	draw_Line(nodos.at(15), win);
	win.wait_for_button();

};


