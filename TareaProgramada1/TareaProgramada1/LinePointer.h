#include "Node.h"
using namespace Graph_lib;

	
void draw_Line(Node *nodo, Simple_window &win) {
	int pos = nodo->getPos();
	int sPos = 0;
	if (nodo->sig) {
		sPos = nodo->sig->getPos();
	}
	else {
		return;
	}
	int posFija = pos;
	int sPosFija = sPos;
	int fila;
	int filapos;
	static Open_polyline opl;
	opl.set_color(Color::black);
	static Open_polyline opl2;
	opl2.set_color(Color::black);
	if (pos <= 7)
		filapos = 55;
	else if (pos > 7 && pos <= 14)
	{
		filapos = 155;
		pos = pos - 7;
	}
	else if (pos > 14 && pos <= 21)
	{
		filapos = 255;
		pos = pos - 14;

	}
	else
	{
		filapos = 355;
		pos = pos - 21;
	}
	if (sPosFija <= 7)
		fila = 55;
	else if (sPosFija > 7 && sPosFija <= 14)
	{
		sPos = sPos - 7;
		fila = 155;
	}
	else if (sPosFija > 14 && sPosFija <= 21)
	{
		sPos = sPos - 14;
		fila = 255;
	}
	else
	{
		fila = 355;
		sPos = sPos - 21;
	}
	if (sPosFija == posFija + 1) {

		opl.add(Point(((pos - 1) * 100) + 80, filapos));
		opl.add(Point(((sPos - 1) * 100) + 20, filapos));
		win.attach(opl);
	}
	else {
		if (sPosFija <= 7) {

			opl.add(Point(((pos - 1) * 100) + 80, filapos));
			opl.add(Point(pos * 100, filapos));
			opl.add(Point(pos * 100, filapos - 25));
			opl.add(Point((sPos - 1) * 100, fila - 25));
			opl.add(Point((sPos - 1) * 100, fila));
			opl.add(Point(((sPos - 1) * 100) + 20, fila));
			win.attach(opl);
		}
		else if (sPosFija > 7 && sPosFija <= 14)
		{
			opl.add(Point(((pos - 1) * 100) + 80, filapos));
			opl.add(Point(pos * 100, filapos));
			opl.add(Point(pos * 100, filapos - 25));
			opl.add(Point(1000, fila - 25));
			opl2.add(Point(5, (fila - 25)));
			opl2.add(Point((sPos - 1) * 100, (fila - 25)));
			opl2.add(Point((sPos - 1) * 100, fila));
			opl2.add(Point(((sPos - 1) * 100) + 20, fila));
			win.attach(opl);
			win.attach(opl2);
		}
		else if (sPosFija > 14 && sPosFija <= 21)
		{
			opl.add(Point(((pos - 1) * 100) + 80, filapos));
			opl.add(Point(pos * 100, filapos));
			opl.add(Point(pos * 100, filapos - 25));
			opl.add(Point(1000, filapos - 25));
			opl2.add(Point(5, (fila - 25)));
			opl2.add(Point((sPos - 1) * 100, (fila - 25)));
			opl2.add(Point((sPos - 1) * 100, fila));
			opl2.add(Point(((sPos - 1) * 100) + 20, fila));
			win.attach(opl);
			win.attach(opl2);
		}
		else
		{
			opl.add(Point(((pos - 1) * 100) + 80, filapos));
			opl.add(Point(pos * 100, filapos));
			opl.add(Point(pos * 100, filapos - 25));
			opl.add(Point(1000, filapos - 25));
			opl2.add(Point(5, fila - 25));
			opl2.add(Point((sPos - 1) * 100, fila - 25));
			opl2.add(Point((sPos - 1) * 100, fila));
			opl2.add(Point(((sPos - 1) * 100) + 20, fila));
			win.attach(opl);
			win.attach(opl2);
		}
	}
}

