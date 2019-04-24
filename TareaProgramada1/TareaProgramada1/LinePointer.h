#include "Node.h"
using namespace Graph_lib;

	
void draw_Line(Node *nodo, Simple_window &win,int numnodo) {
	

	static Open_polyline opl1;
	opl1.set_color(Color::black);
	static Open_polyline opl2_1;
	opl2_1.set_color(Color::black);
	static Open_polyline opl2;
	opl2.set_color(Color::blue);
	static Open_polyline opl2_2;
	opl2_2.set_color(Color::blue);
	static Open_polyline opl3;
	opl3.set_color(Color::green);
	static Open_polyline opl2_3;
	opl2_3.set_color(Color::green);
	static Open_polyline opl4;
	opl4.set_color(Color::red);
	static Open_polyline opl2_4;
	opl2_4.set_color(Color::red);
	static Open_polyline opl5;
	opl5.set_color(Color::dark_yellow);
	static Open_polyline opl2_5;
	opl2_5.set_color(Color::dark_yellow);
	static Open_polyline opl6;
	opl6.set_color(Color::cyan);
	static Open_polyline opl2_6;
	opl2_6.set_color(Color::cyan);
	static Open_polyline opl7;
	opl7.set_color(Color::magenta);
	static Open_polyline opl2_7;
	opl2_7.set_color(Color::magenta);
	static Open_polyline opl8;
	opl8.set_color(Color::dark_blue);
	static Open_polyline opl2_8;
	opl2_8.set_color(Color::dark_blue);
	static Open_polyline opl9;
	opl9.set_color(Color::white);
	static Open_polyline opl2_9;
	opl2_9.set_color(Color::white);
	static Open_polyline opl10;
	opl10.set_color(Color::dark_green);
	static Open_polyline opl2_10;
	opl2_10.set_color(Color::dark_green);
	static Open_polyline opl11;
	opl11.set_color(Color::black);
	static Open_polyline opl2_11;
	opl2_11.set_color(Color::black);
	static Open_polyline opl12;
	opl12.set_color(Color::black);
	static Open_polyline opl2_12;
	opl2_12.set_color(Color::black);
	static Open_polyline opl13;
	opl13.set_color(Color::black);
	static Open_polyline opl2_13;
	opl2_13.set_color(Color::black);
	static Open_polyline opl14;
	opl14.set_color(Color::black);
	static Open_polyline opl2_14;
	opl2_14.set_color(Color::black);
	static Open_polyline opl15;
	opl15.set_color(Color::black);
	static Open_polyline opl2_15;
	opl2_15.set_color(Color::black);
	static Open_polyline opl16;
	opl16.set_color(Color::black);
	static Open_polyline opl2_16;
	opl2_16.set_color(Color::black);
	static Open_polyline opl17;
	opl17.set_color(Color::black);
	static Open_polyline opl2_17;
	opl2_17.set_color(Color::black);
	static Open_polyline opl18;
	opl18.set_color(Color::black);
	static Open_polyline opl2_18;
	opl2_18.set_color(Color::black);
	static Open_polyline opl19;
	opl19.set_color(Color::black);
	static Open_polyline opl2_19;
	opl2_19.set_color(Color::black);
	static Open_polyline opl20;
	opl20.set_color(Color::black);
	static Open_polyline opl2_20;
	opl2_20.set_color(Color::black);
	static Open_polyline opl21;
	opl21.set_color(Color::black);
	static Open_polyline opl2_21;
	opl2_21.set_color(Color::black);
	static Open_polyline opl22;
	opl22.set_color(Color::black);
	static Open_polyline opl2_22;
	opl2_22.set_color(Color::black);
	static Open_polyline opl23;
	opl23.set_color(Color::black);
	static Open_polyline opl2_23;
	opl2_23.set_color(Color::black);
	static Open_polyline opl24;
	opl24.set_color(Color::black);
	static Open_polyline opl2_24;
	opl2_24.set_color(Color::black);
	static Open_polyline opl25;
	opl25.set_color(Color::black);
	static Open_polyline opl2_25;
	opl2_25.set_color(Color::black);
	static Open_polyline opl26;
	opl26.set_color(Color::black);
	static Open_polyline opl2_26;
	opl2_26.set_color(Color::black);
	static Open_polyline opl27;
	opl27.set_color(Color::black);
	static Open_polyline opl2_27;
	opl2_27.set_color(Color::black);
	static Open_polyline opl28;
	opl28.set_color(Color::black);
	static Open_polyline opl2_28;
	opl2_28.set_color(Color::black);

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
		switch (numnodo)
		{
		case 0:
			opl1.add(Point(((pos - 1) * 100) + 80, filapos));
			opl1.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl1);
			break;
		case 1:
			opl2.add(Point(((pos - 1) * 100) + 80, filapos));
			opl2.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl2);
			break;
		case 2:
			opl3.add(Point(((pos - 1) * 100) + 80, filapos));
			opl3.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl3);
			break;
		case 3:
			opl4.add(Point(((pos - 1) * 100) + 80, filapos));
			opl4.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl4);
			break;
		case 4:
			opl5.add(Point(((pos - 1) * 100) + 80, filapos));
			opl5.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl5);
			break;
		case 6:
			opl7.add(Point(((pos - 1) * 100) + 80, filapos));
			opl7.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl7);
			break;
		case 7:
			opl8.add(Point(((pos - 1) * 100) + 80, filapos));
			opl8.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl8);
			break;
		case 8:
			opl9.add(Point(((pos - 1) * 100) + 80, filapos));
			opl9.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl9);
			break;
		case 9:
			opl10.add(Point(((pos - 1) * 100) + 80, filapos));
			opl10.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl10);
			break;
		case 10:
			opl11.add(Point(((pos - 1) * 100) + 80, filapos));
			opl11.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl11);
			break;
		case 11:
			opl12.add(Point(((pos - 1) * 100) + 80, filapos));
			opl12.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl12);
			break;
		case 12:
			opl13.add(Point(((pos - 1) * 100) + 80, filapos));
			opl13.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl13);
			break;
		case 13:
			opl14.add(Point(((pos - 1) * 100) + 80, filapos));
			opl14.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl14);
			break;
		case 14:
			opl15.add(Point(((pos - 1) * 100) + 80, filapos));
			opl15.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl15);
			break;
		case 15:
			opl16.add(Point(((pos - 1) * 100) + 80, filapos));
			opl16.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl16);
			break;
		case 16:
			opl7.add(Point(((pos - 1) * 100) + 80, filapos));
			opl7.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl8);
			break;
		case 17:
			opl8.add(Point(((pos - 1) * 100) + 80, filapos));
			opl8.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl8);
			break;
		case 18:
			opl19.add(Point(((pos - 1) * 100) + 80, filapos));
			opl19.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl19);
			break;
		case 19:
			opl20.add(Point(((pos - 1) * 100) + 80, filapos));
			opl20.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl20);
			break;
		case 20:
			opl21.add(Point(((pos - 1) * 100) + 80, filapos));
			opl21.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl21);
			break;
		case 21:
			opl22.add(Point(((pos - 1) * 100) + 80, filapos));
			opl22.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl22);
			break;
		case 22:
			opl23.add(Point(((pos - 1) * 100) + 80, filapos));
			opl23.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl23);
			break;
		case 23:
			opl24.add(Point(((pos - 1) * 100) + 80, filapos));
			opl24.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl24);
			break;
		case 24:
			opl25.add(Point(((pos - 1) * 100) + 80, filapos));
			opl25.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl25);
			break;
		case 25:
			opl26.add(Point(((pos - 1) * 100) + 80, filapos));
			opl26.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl26);
			break;
		case 26:
			opl27.add(Point(((pos - 1) * 100) + 80, filapos));
			opl27.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl27);
			break;
		case 27:
			opl28.add(Point(((pos - 1) * 100) + 80, filapos));
			opl28.add(Point(((sPos - 1) * 100) + 20, filapos));
			win.attach(opl28);
			break;
		}

		
	}
	else {
		if (sPosFija <= 7) {
			switch (numnodo)
			{
				
			case 0:
				opl1.add(Point(((pos - 1) * 100) + 80, filapos));
				opl1.add(Point(pos * 100, filapos));
				opl1.add(Point(pos * 100, filapos - 25));
				opl1.add(Point((sPos - 1) * 100, fila - 25));
				opl1.add(Point((sPos - 1) * 100, fila));
				opl1.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl1);
				break;
			case 1:
				opl2.add(Point(((pos - 1) * 100) + 80, filapos));
				opl2.add(Point(pos * 100, filapos));
				opl2.add(Point(pos * 100, filapos - 25));
				opl2.add(Point((sPos - 1) * 100, fila - 25));
				opl2.add(Point((sPos - 1) * 100, fila));
				opl2.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl2);
				break;
			case 2:
				opl3.add(Point(((pos - 1) * 100) + 80, filapos));
				opl3.add(Point(pos * 100, filapos));
				opl3.add(Point(pos * 100, filapos - 25));
				opl3.add(Point((sPos - 1) * 100, fila - 25));
				opl3.add(Point((sPos - 1) * 100, fila));
				opl3.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl3);
				break;
			case 3:
				opl4.add(Point(((pos - 1) * 100) + 80, filapos));
				opl4.add(Point(pos * 100, filapos));
				opl4.add(Point(pos * 100, filapos - 25));
				opl4.add(Point((sPos - 1) * 100, fila - 25));
				opl4.add(Point((sPos - 1) * 100, fila));
				opl4.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl4);
				break;
			case 4:
				opl5.add(Point(((pos - 1) * 100) + 80, filapos));
				opl5.add(Point(pos * 100, filapos));
				opl5.add(Point(pos * 100, filapos - 25));
				opl5.add(Point((sPos - 1) * 100, fila - 25));
				opl5.add(Point((sPos - 1) * 100, fila));
				opl5.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl5);
				break;
			case 5:
				opl6.add(Point(((pos - 1) * 100) + 80, filapos));
				opl6.add(Point(pos * 100, filapos));
				opl6.add(Point(pos * 100, filapos - 25));
				opl6.add(Point((sPos - 1) * 100, fila - 25));
				opl6.add(Point((sPos - 1) * 100, fila));
				opl6.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl6);
				break;
			case 6:
				opl7.add(Point(((pos - 1) * 100) + 80, filapos));
				opl7.add(Point(pos * 100, filapos));
				opl7.add(Point(pos * 100, filapos - 25));
				opl7.add(Point((sPos - 1) * 100, fila - 25));
				opl7.add(Point((sPos - 1) * 100, fila));
				opl7.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl7);
				break;
			case 7:
				opl8.add(Point(((pos - 1) * 100) + 80, filapos));
				opl8.add(Point(pos * 100, filapos));
				opl8.add(Point(pos * 100, filapos - 25));
				opl8.add(Point((sPos - 1) * 100, fila - 25));
				opl8.add(Point((sPos - 1) * 100, fila));
				opl8.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl8);
				break;
			case 8:
				opl9.add(Point(((pos - 1) * 100) + 80, filapos));
				opl9.add(Point(pos * 100, filapos));
				opl9.add(Point(pos * 100, filapos - 25));
				opl9.add(Point((sPos - 1) * 100, fila - 25));
				opl9.add(Point((sPos - 1) * 100, fila));
				opl9.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl9);
				break;
			case 9:
				opl10.add(Point(((pos - 1) * 100) + 80, filapos));
				opl10.add(Point(pos * 100, filapos));
				opl10.add(Point(pos * 100, filapos - 25));
				opl10.add(Point((sPos - 1) * 100, fila - 25));
				opl10.add(Point((sPos - 1) * 100, fila));
				opl10.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl10);
				break;
			case 10:
				opl11.add(Point(((pos - 1) * 100) + 80, filapos));
				opl11.add(Point(pos * 100, filapos));
				opl11.add(Point(pos * 100, filapos - 25));
				opl11.add(Point((sPos - 1) * 100, fila - 25));
				opl11.add(Point((sPos - 1) * 100, fila));
				opl11.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl11);
				break;
			case 11:
				opl12.add(Point(((pos - 1) * 100) + 80, filapos));
				opl12.add(Point(pos * 100, filapos));
				opl12.add(Point(pos * 100, filapos - 25));
				opl12.add(Point((sPos - 1) * 100, fila - 25));
				opl12.add(Point((sPos - 1) * 100, fila));
				opl12.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl12);
				break;
			case 12:
				opl13.add(Point(((pos - 1) * 100) + 80, filapos));
				opl13.add(Point(pos * 100, filapos));
				opl13.add(Point(pos * 100, filapos - 25));
				opl13.add(Point((sPos - 1) * 100, fila - 25));
				opl13.add(Point((sPos - 1) * 100, fila));
				opl13.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl13);
				break;
			case 13:
				opl14.add(Point(((pos - 1) * 100) + 80, filapos));
				opl14.add(Point(pos * 100, filapos));
				opl14.add(Point(pos * 100, filapos - 25));
				opl14.add(Point((sPos - 1) * 100, fila - 25));
				opl14.add(Point((sPos - 1) * 100, fila));
				opl14.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl14);
				break;
			case 14:
				opl15.add(Point(((pos - 1) * 100) + 80, filapos));
				opl15.add(Point(pos * 100, filapos));
				opl15.add(Point(pos * 100, filapos - 25));
				opl15.add(Point((sPos - 1) * 100, fila - 25));
				opl15.add(Point((sPos - 1) * 100, fila));
				opl15.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl15);
				break;
			case 15:
				opl16.add(Point(((pos - 1) * 100) + 80, filapos));
				opl16.add(Point(pos * 100, filapos));
				opl16.add(Point(pos * 100, filapos - 25));
				opl16.add(Point((sPos - 1) * 100, fila - 25));
				opl16.add(Point((sPos - 1) * 100, fila));
				opl16.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl16);
				break;
			case 16:
				opl17.add(Point(((pos - 1) * 100) + 80, filapos));
				opl17.add(Point(pos * 100, filapos));
				opl17.add(Point(pos * 100, filapos - 25));
				opl17.add(Point((sPos - 1) * 100, fila - 25));
				opl17.add(Point((sPos - 1) * 100, fila));
				opl17.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl17);
				break;
			case 17:
				opl18.add(Point(((pos - 1) * 100) + 80, filapos));
				opl18.add(Point(pos * 100, filapos));
				opl18.add(Point(pos * 100, filapos - 25));
				opl18.add(Point((sPos - 1) * 100, fila - 25));
				opl18.add(Point((sPos - 1) * 100, fila));
				opl18.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl18);
				break;
			case 18:
				opl19.add(Point(((pos - 1) * 100) + 80, filapos));
				opl19.add(Point(pos * 100, filapos));
				opl19.add(Point(pos * 100, filapos - 25));
				opl19.add(Point((sPos - 1) * 100, fila - 25));
				opl19.add(Point((sPos - 1) * 100, fila));
				opl19.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl19);
				break;
			case 19:
				opl20.add(Point(((pos - 1) * 100) + 80, filapos));
				opl20.add(Point(pos * 100, filapos));
				opl20.add(Point(pos * 100, filapos - 25));
				opl20.add(Point((sPos - 1) * 100, fila - 25));
				opl20.add(Point((sPos - 1) * 100, fila));
				opl20.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl20);
				break;
			case 20:
				opl21.add(Point(((pos - 1) * 100) + 80, filapos));
				opl21.add(Point(((pos - 1) * 100) + 80, filapos));
				opl21.add(Point(pos * 100, filapos));
				opl21.add(Point(pos * 100, filapos - 25));
				opl21.add(Point((sPos - 1) * 100, fila - 25));
				opl21.add(Point((sPos - 1) * 100, fila));
				opl21.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl21);
				break;
			case 21:
				opl22.add(Point(((pos - 1) * 100) + 80, filapos));
				opl22.add(Point(pos * 100, filapos));
				opl22.add(Point(pos * 100, filapos - 25));
				opl22.add(Point((sPos - 1) * 100, fila - 25));
				opl22.add(Point((sPos - 1) * 100, fila));
				opl22.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl22);
				break;
			case 22:
				opl23.add(Point(((pos - 1) * 100) + 80, filapos));
				opl23.add(Point(pos * 100, filapos));
				opl23.add(Point(pos * 100, filapos - 25));
				opl23.add(Point((sPos - 1) * 100, fila - 25));
				opl23.add(Point((sPos - 1) * 100, fila));
				opl23.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl23);
				break;
			case 23:
				opl24.add(Point(((pos - 1) * 100) + 80, filapos));
				opl24.add(Point(pos * 100, filapos));
				opl24.add(Point(pos * 100, filapos - 25));
				opl24.add(Point((sPos - 1) * 100, fila - 25));
				opl24.add(Point((sPos - 1) * 100, fila));
				opl24.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl24);
				break;
			case 24:
				opl25.add(Point(((pos - 1) * 100) + 80, filapos));
				opl25.add(Point(pos * 100, filapos));
				opl25.add(Point(pos * 100, filapos - 25));
				opl25.add(Point((sPos - 1) * 100, fila - 25));
				opl25.add(Point((sPos - 1) * 100, fila));
				opl25.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl25);
				break;
			case 25:
				opl26.add(Point(((pos - 1) * 100) + 80, filapos));
				opl26.add(Point(pos * 100, filapos));
				opl26.add(Point(pos * 100, filapos - 25));
				opl26.add(Point((sPos - 1) * 100, fila - 25));
				opl26.add(Point((sPos - 1) * 100, fila));
				opl26.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl26);
				break;
			case 26:
				opl27.add(Point(((pos - 1) * 100) + 80, filapos));
				opl27.add(Point(pos * 100, filapos));
				opl27.add(Point(pos * 100, filapos - 25));
				opl27.add(Point((sPos - 1) * 100, fila - 25));
				opl27.add(Point((sPos - 1) * 100, fila));
				opl27.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl27);
				break;
			case 27:
				opl28.add(Point(((pos - 1) * 100) + 80, filapos));
				opl28.add(Point(pos * 100, filapos));
				opl28.add(Point(pos * 100, filapos - 25));
				opl28.add(Point((sPos - 1) * 100, fila - 25));
				opl28.add(Point((sPos - 1) * 100, fila));
				opl28.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl28);
				break;
			}
		}
		else if (sPosFija > 7 && sPosFija <= 14)
		{	
			switch (numnodo)
			{
				
				
			case 0:
				opl1.add(Point(((pos - 1) * 100) + 80, filapos));
				opl1.add(Point(pos * 100, filapos));
				opl1.add(Point(pos * 100, filapos - 25));
				opl1.add(Point(1000, filapos - 25));
				opl2_1.add(Point(5, (fila - 25)));
				opl2_1.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_1.add(Point((sPos - 1) * 100, fila));
				opl2_1.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl1);
				win.attach(opl2_1);
				break;
			case 1:
				opl2.add(Point(((pos - 1) * 100) + 80, filapos));
				opl2.add(Point(pos * 100, filapos));
				opl2.add(Point(pos * 100, filapos - 25));
				opl2.add(Point(1000, filapos - 25));
				opl2_2.add(Point(5, (fila - 25)));
				opl2_2.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_2.add(Point((sPos - 1) * 100, fila));
				opl2_2.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl2);
				win.attach(opl2_2);
				break;
			case 2:
				opl3.add(Point(((pos - 1) * 100) + 80, filapos));
				opl3.add(Point(pos * 100, filapos));
				opl3.add(Point(pos * 100, filapos - 25));
				opl3.add(Point(1000, filapos - 25));
				opl2_3.add(Point(5, (fila - 25)));
				opl2_3.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_3.add(Point((sPos - 1) * 100, fila));
				opl2_3.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl3);
				win.attach(opl2_3);
				break;
			case 3:
				opl4.add(Point(((pos - 1) * 100) + 80, filapos));
				opl4.add(Point(pos * 100, filapos));
				opl4.add(Point(pos * 100, filapos - 25));
				opl4.add(Point(1000, filapos - 25));
				opl2_4.add(Point(5, (fila - 25)));
				opl2_4.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_4.add(Point((sPos - 1) * 100, fila));
				opl2_4.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl4);
				win.attach(opl2_4);
				break;
			case 4:
				opl5.add(Point(((pos - 1) * 100) + 80, filapos));
				opl5.add(Point(pos * 100, filapos));
				opl5.add(Point(pos * 100, filapos - 25));
				opl5.add(Point(1000, filapos - 25));
				opl2_5.add(Point(5, (fila - 25)));
				opl2_5.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_5.add(Point((sPos - 1) * 100, fila));
				opl2_5.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl5);
				win.attach(opl2_5);
				break;
			case 5:
				opl6.add(Point(((pos - 1) * 100) + 80, filapos));
				opl6.add(Point(pos * 100, filapos));
				opl6.add(Point(pos * 100, filapos - 25));
				opl6.add(Point(1000, filapos - 25));
				opl2_6.add(Point(5, (fila - 25)));
				opl2_6.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_6.add(Point((sPos - 1) * 100, fila));
				opl2_6.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl6);
				win.attach(opl2_6);
				break;
			case 6:
				opl7.add(Point(((pos - 1) * 100) + 80, filapos));
				opl7.add(Point(pos * 100, filapos));
				opl7.add(Point(pos * 100, filapos - 25));
				opl7.add(Point(1000, filapos - 25));
				opl2_7.add(Point(5, (fila - 25)));
				opl2_7.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_7.add(Point((sPos - 1) * 100, fila));
				opl2_7.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl7);
				win.attach(opl2_7);
				break;
			case 7:
				opl8.add(Point(((pos - 1) * 100) + 80, filapos));
				opl8.add(Point(pos * 100, filapos));
				opl8.add(Point(pos * 100, filapos - 25));
				opl8.add(Point(1000, filapos - 25));
				opl2_8.add(Point(5, (fila - 25)));
				opl2_8.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_8.add(Point((sPos - 1) * 100, fila));
				opl2_8.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl8);
				win.attach(opl2_8);
				break;
			case 8:
				opl9.add(Point(((pos - 1) * 100) + 80, filapos));
				opl9.add(Point(pos * 100, filapos));
				opl9.add(Point(pos * 100, filapos - 25));
				opl9.add(Point(1000, filapos - 25));
				opl2_9.add(Point(5, (fila - 25)));
				opl2_9.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_9.add(Point((sPos - 1) * 100, fila));
				opl2_9.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl9);
				win.attach(opl2_9);
				break;
			case 9:
				opl10.add(Point(((pos - 1) * 100) + 80, filapos));
				opl10.add(Point(pos * 100, filapos));
				opl10.add(Point(pos * 100, filapos - 25));
				opl10.add(Point(1000, filapos - 25));
				opl2_10.add(Point(5, (fila - 25)));
				opl2_10.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_10.add(Point((sPos - 1) * 100, fila));
				opl2_10.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl10);
				win.attach(opl2_10);
				break;
			case 10:
				opl11.add(Point(((pos - 1) * 100) + 80, filapos));
				opl11.add(Point(pos * 100, filapos));
				opl11.add(Point(pos * 100, filapos - 25));


				opl11.add(Point(1000, filapos - 25));
				opl2_11.add(Point(5, (fila - 25)));
				opl2_11.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_11.add(Point((sPos - 1) * 100, fila));
				opl2_11.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl11);
				win.attach(opl2_11);
				break;
			case 11:
				opl12.add(Point(((pos - 1) * 100) + 80, filapos));
				opl12.add(Point(pos * 100, filapos));
				opl12.add(Point(pos * 100, filapos - 25));
				opl12.add(Point(1000, filapos - 25));
				opl2_12.add(Point(5, (fila - 25)));
				opl2_12.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_12.add(Point((sPos - 1) * 100, fila));
				opl2_12.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl12);
				win.attach(opl2_12);
				break;
			case 12:
				opl13.add(Point(((pos - 1) * 100) + 80, filapos));
				opl13.add(Point(pos * 100, filapos));
				opl13.add(Point(pos * 100, filapos - 25));
				opl13.add(Point(1000, filapos - 25));
				opl2_13.add(Point(5, (fila - 25)));
				opl2_13.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_13.add(Point((sPos - 1) * 100, fila));
				opl2_13.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl13);
				win.attach(opl2_13);
				break;
			case 13:
				opl14.add(Point(((pos - 1) * 100) + 80, filapos));
				opl14.add(Point(pos * 100, filapos));
				opl14.add(Point(pos * 100, filapos - 25));
				opl14.add(Point(1000, filapos - 25));
				opl2_14.add(Point(5, (fila - 25)));
				opl2_14.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_14.add(Point((sPos - 1) * 100, fila));
				opl2_14.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl14);
				win.attach(opl2_14);
				break;
			case 14:
				opl15.add(Point(((pos - 1) * 100) + 80, filapos));
				opl15.add(Point(pos * 100, filapos));
				opl15.add(Point(pos * 100, filapos - 25));
				opl15.add(Point(1000, filapos - 25));
				opl2_15.add(Point(5, (fila - 25)));
				opl2_15.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_15.add(Point((sPos - 1) * 100, fila));
				opl2_15.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl15);
				win.attach(opl2_15);
				break;
			case 15:
				opl16.add(Point(((pos - 1) * 100) + 80, filapos));
				opl16.add(Point(pos * 100, filapos));
				opl16.add(Point(pos * 100, filapos - 25));
				opl16.add(Point(1000, filapos - 25));
				opl2_16.add(Point(5, (fila - 25)));
				opl2_16.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_16.add(Point((sPos - 1) * 100, fila));
				opl2_16.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl16);
				win.attach(opl2_16);
				break;
			case 16:
				opl17.add(Point(((pos - 1) * 100) + 80, filapos));
				opl17.add(Point(pos * 100, filapos));
				opl17.add(Point(pos * 100, filapos - 25));
				opl17.add(Point(1000, filapos - 25));
				opl2_17.add(Point(5, (fila - 25)));
				opl2_17.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_17.add(Point((sPos - 1) * 100, fila));
				opl2_17.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl17);
				win.attach(opl2_17);
				break;
			case 17:
				opl18.add(Point(((pos - 1) * 100) + 80, filapos));
				opl18.add(Point(pos * 100, filapos));
				opl18.add(Point(pos * 100, filapos - 25));
				opl18.add(Point(1000, filapos - 25));
				opl2_18.add(Point(5, (fila - 25)));
				opl2_18.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_18.add(Point((sPos - 1) * 100, fila));
				opl2_18.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl18);
				win.attach(opl2_18);
				break;
			case 18:
				opl19.add(Point(((pos - 1) * 100) + 80, filapos));
				opl19.add(Point(pos * 100, filapos));
				opl19.add(Point(pos * 100, filapos - 25));
				opl19.add(Point(1000, filapos - 25));
				opl2_19.add(Point(5, (fila - 25)));
				opl2_19.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_19.add(Point((sPos - 1) * 100, fila));
				opl2_19.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl19);
				win.attach(opl2_19);
				break;
			case 19:
				opl20.add(Point(((pos - 1) * 100) + 80, filapos));
				opl20.add(Point(pos * 100, filapos));
				opl20.add(Point(pos * 100, filapos - 25));
				opl20.add(Point(1000, filapos - 25));
				opl2_20.add(Point(5, (fila - 25)));
				opl2_20.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_20.add(Point((sPos - 1) * 100, fila));
				opl2_20.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl20);
				win.attach(opl2_20);
				break;
			case 20:
				opl21.add(Point(((pos - 1) * 100) + 80, filapos));
				opl21.add(Point(pos * 100, filapos));
				opl21.add(Point(pos * 100, filapos - 25));
				opl21.add(Point(1000, filapos - 25));


				opl2_21.add(Point(5, (fila - 25)));
				opl2_21.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_21.add(Point((sPos - 1) * 100, fila));
				opl2_21.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl21);
				win.attach(opl2_21);
				break;
			case 21:
				opl22.add(Point(((pos - 1) * 100) + 80, filapos));
				opl22.add(Point(pos * 100, filapos));
				opl22.add(Point(pos * 100, filapos - 25));
				opl22.add(Point(1000, filapos - 25));
				opl2_22.add(Point(5, (fila - 25)));
				opl2_22.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_22.add(Point((sPos - 1) * 100, fila));
				opl2_22.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl22);
				win.attach(opl2_22);
				break;
			case 22:
				opl23.add(Point(((pos - 1) * 100) + 80, filapos));
				opl23.add(Point(pos * 100, filapos));
				opl23.add(Point(pos * 100, filapos - 25));
				opl23.add(Point(1000, filapos - 25));
				opl2_23.add(Point(5, (fila - 25)));
				opl2_23.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_23.add(Point((sPos - 1) * 100, fila));
				opl2_23.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl23);
				win.attach(opl2_23);
				break;
			case 23:
				opl24.add(Point(((pos - 1) * 100) + 80, filapos));
				opl24.add(Point(pos * 100, filapos));
				opl24.add(Point(pos * 100, filapos - 25));
				opl24.add(Point(1000, filapos - 25));
				opl2_24.add(Point(5, (fila - 25)));
				opl2_24.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_24.add(Point((sPos - 1) * 100, fila));
				opl2_24.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl24);
				win.attach(opl2_24);
				break;
			case 24:
				opl25.add(Point(((pos - 1) * 100) + 80, filapos));
				opl25.add(Point(pos * 100, filapos));
				opl25.add(Point(pos * 100, filapos - 25));
				opl25.add(Point(1000, filapos - 25));
				opl2_25.add(Point(5, (fila - 25)));
				opl2_25.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_25.add(Point((sPos - 1) * 100, fila));
				opl2_25.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl25);
				win.attach(opl2_25);
				break;
			case 25:
				opl26.add(Point(((pos - 1) * 100) + 80, filapos));
				opl26.add(Point(pos * 100, filapos));
				opl26.add(Point(pos * 100, filapos - 25));
				opl26.add(Point(1000, filapos - 25));
				opl2_26.add(Point(5, (fila - 25)));
				opl2_26.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_26.add(Point((sPos - 1) * 100, fila));
				opl2_26.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl26);
				win.attach(opl2_26);
				break;
			case 26:
				opl27.add(Point(((pos - 1) * 100) + 80, filapos));
				opl27.add(Point(pos * 100, filapos));
				opl27.add(Point(pos * 100, filapos - 25));
				opl27.add(Point(1000, filapos - 25));
				opl2_27.add(Point(5, (fila - 25)));
				opl2_27.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_27.add(Point((sPos - 1) * 100, fila));
				opl2_27.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl27);
				win.attach(opl2_27);
				break;
			case 27:
				opl28.add(Point(((pos - 1) * 100) + 80, filapos));
				opl28.add(Point(pos * 100, filapos));
				opl28.add(Point(pos * 100, filapos - 25));
				opl28.add(Point(1000, filapos - 25));
				opl2_28.add(Point(5, (fila - 25)));
				opl2_28.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_28.add(Point((sPos - 1) * 100, fila));
				opl2_28.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl28);
				win.attach(opl2_28);
				break;
				
			}
		}
		else if (sPosFija > 14 && sPosFija <= 21)
		{
			switch (numnodo)
			{
			case 0:
				opl1.add(Point(((pos - 1) * 100) + 80, filapos));
				opl1.add(Point(pos * 100, filapos));
				opl1.add(Point(pos * 100, filapos - 25));
				opl1.add(Point(1000, filapos - 25));
				opl2_1.add(Point(5, (fila - 25)));
				opl2_1.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_1.add(Point((sPos - 1) * 100, fila));
				opl2_1.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl1);
				win.attach(opl2_1);
				break;
			case 1:
				opl2.add(Point(((pos - 1) * 100) + 80, filapos));
				opl2.add(Point(pos * 100, filapos));
				opl2.add(Point(pos * 100, filapos - 25));
				opl2.add(Point(1000, filapos - 25));
				opl2_2.add(Point(5, (fila - 25)));
				opl2_2.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_2.add(Point((sPos - 1) * 100, fila));
				opl2_2.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl2);
				win.attach(opl2_2);
				break;
			case 2:
				opl3.add(Point(((pos - 1) * 100) + 80, filapos));
				opl3.add(Point(pos * 100, filapos));
				opl3.add(Point(pos * 100, filapos - 25));
				opl3.add(Point(1000, filapos - 25));
				opl2_3.add(Point(5, (fila - 25)));
				opl2_3.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_3.add(Point((sPos - 1) * 100, fila));
				opl2_3.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl3);
				win.attach(opl2_3);
				break;
			case 3:
				opl4.add(Point(((pos - 1) * 100) + 80, filapos));
				opl4.add(Point(pos * 100, filapos));
				opl4.add(Point(pos * 100, filapos - 25));
				opl4.add(Point(1000, filapos - 25));
				opl2_4.add(Point(5, (fila - 25)));
				opl2_4.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_4.add(Point((sPos - 1) * 100, fila));
				opl2_4.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl4);
				win.attach(opl2_4);
				break;
			case 4:
				opl5.add(Point(((pos - 1) * 100) + 80, filapos));
				opl5.add(Point(pos * 100, filapos));
				opl5.add(Point(pos * 100, filapos - 25));
				opl5.add(Point(1000, filapos - 25));
				opl2_5.add(Point(5, (fila - 25)));
				opl2_5.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_5.add(Point((sPos - 1) * 100, fila));
				opl2_5.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl5);
				win.attach(opl2_5);
				break;
			case 5:
				opl6.add(Point(((pos - 1) * 100) + 80, filapos));
				opl6.add(Point(pos * 100, filapos));
				opl6.add(Point(pos * 100, filapos - 25));
				opl6.add(Point(1000, filapos - 25));
				opl2_6.add(Point(5, (fila - 25)));
				opl2_6.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_6.add(Point((sPos - 1) * 100, fila));
				opl2_6.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl6);
				win.attach(opl2_6);
				break;
			case 6:
				opl7.add(Point(((pos - 1) * 100) + 80, filapos));
				opl7.add(Point(pos * 100, filapos));
				opl7.add(Point(pos * 100, filapos - 25));
				opl7.add(Point(1000, filapos - 25));
				opl2_7.add(Point(5, (fila - 25)));
				opl2_7.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_7.add(Point((sPos - 1) * 100, fila));
				opl2_7.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl7);
				win.attach(opl2_7);
				break;
			case 7:
				opl8.add(Point(((pos - 1) * 100) + 80, filapos));
				opl8.add(Point(pos * 100, filapos));
				opl8.add(Point(pos * 100, filapos - 25));
				opl8.add(Point(1000, filapos - 25));
				opl2_8.add(Point(5, (fila - 25)));
				opl2_8.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_8.add(Point((sPos - 1) * 100, fila));
				opl2_8.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl8);
				win.attach(opl2_8);
				break;
			case 8:
				opl9.add(Point(((pos - 1) * 100) + 80, filapos));
				opl9.add(Point(pos * 100, filapos));
				opl9.add(Point(pos * 100, filapos - 25));
				opl9.add(Point(1000, filapos - 25));
				opl2_9.add(Point(5, (fila - 25)));
				opl2_9.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_9.add(Point((sPos - 1) * 100, fila));
				opl2_9.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl9);
				win.attach(opl2_9);
				break;
			case 9:
				opl10.add(Point(((pos - 1) * 100) + 80, filapos));
				opl10.add(Point(pos * 100, filapos));
				opl10.add(Point(pos * 100, filapos - 25));
				opl10.add(Point(1000, filapos - 25));
				opl2_10.add(Point(5, (fila - 25)));
				opl2_10.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_10.add(Point((sPos - 1) * 100, fila));
				opl2_10.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl10);
				win.attach(opl2_10);
				break;
			case 10:
				opl11.add(Point(((pos - 1) * 100) + 80, filapos));
				opl11.add(Point(pos * 100, filapos));
				opl11.add(Point(pos * 100, filapos - 25));


				opl11.add(Point(1000, filapos - 25));
				opl2_11.add(Point(5, (fila - 25)));
				opl2_11.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_11.add(Point((sPos - 1) * 100, fila));
				opl2_11.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl11);
				win.attach(opl2_11);
				break;
			case 11:
				opl12.add(Point(((pos - 1) * 100) + 80, filapos));
				opl12.add(Point(pos * 100, filapos));
				opl12.add(Point(pos * 100, filapos - 25));
				opl12.add(Point(1000, filapos - 25));
				opl2_12.add(Point(5, (fila - 25)));
				opl2_12.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_12.add(Point((sPos - 1) * 100, fila));
				opl2_12.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl12);
				win.attach(opl2_12);
				break;
			case 12:
				opl13.add(Point(((pos - 1) * 100) + 80, filapos));
				opl13.add(Point(pos * 100, filapos));
				opl13.add(Point(pos * 100, filapos - 25));
				opl13.add(Point(1000, filapos - 25));
				opl2_13.add(Point(5, (fila - 25)));
				opl2_13.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_13.add(Point((sPos - 1) * 100, fila));
				opl2_13.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl13);
				win.attach(opl2_13);
				break;
			case 13:
				opl14.add(Point(((pos - 1) * 100) + 80, filapos));
				opl14.add(Point(pos * 100, filapos));
				opl14.add(Point(pos * 100, filapos - 25));
				opl14.add(Point(1000, filapos - 25));
				opl2_14.add(Point(5, (fila - 25)));
				opl2_14.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_14.add(Point((sPos - 1) * 100, fila));
				opl2_14.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl14);
				win.attach(opl2_14);
				break;
			case 14:
				opl15.add(Point(((pos - 1) * 100) + 80, filapos));
				opl15.add(Point(pos * 100, filapos));
				opl15.add(Point(pos * 100, filapos - 25));
				opl15.add(Point(1000, filapos - 25));
				opl2_15.add(Point(5, (fila - 25)));
				opl2_15.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_15.add(Point((sPos - 1) * 100, fila));
				opl2_15.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl15);
				win.attach(opl2_15);
				break;
			case 15:
				opl16.add(Point(((pos - 1) * 100) + 80, filapos));
				opl16.add(Point(pos * 100, filapos));
				opl16.add(Point(pos * 100, filapos - 25));
				opl16.add(Point(1000, filapos - 25));
				opl2_16.add(Point(5, (fila - 25)));
				opl2_16.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_16.add(Point((sPos - 1) * 100, fila));
				opl2_16.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl16);
				win.attach(opl2_16);
				break;
			case 16:
				opl17.add(Point(((pos - 1) * 100) + 80, filapos));
				opl17.add(Point(pos * 100, filapos));
				opl17.add(Point(pos * 100, filapos - 25));
				opl17.add(Point(1000, filapos - 25));
				opl2_17.add(Point(5, (fila - 25)));
				opl2_17.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_17.add(Point((sPos - 1) * 100, fila));
				opl2_17.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl17);
				win.attach(opl2_17);
				break;
			case 17:
				opl18.add(Point(((pos - 1) * 100) + 80, filapos));
				opl18.add(Point(pos * 100, filapos));
				opl18.add(Point(pos * 100, filapos - 25));
				opl18.add(Point(1000, filapos - 25));
				opl2_18.add(Point(5, (fila - 25)));
				opl2_18.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_18.add(Point((sPos - 1) * 100, fila));
				opl2_18.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl18);
				win.attach(opl2_18);
				break;
			case 18:
				opl19.add(Point(((pos - 1) * 100) + 80, filapos));
				opl19.add(Point(pos * 100, filapos));
				opl19.add(Point(pos * 100, filapos - 25));
				opl19.add(Point(1000, filapos - 25));
				opl2_19.add(Point(5, (fila - 25)));
				opl2_19.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_19.add(Point((sPos - 1) * 100, fila));
				opl2_19.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl19);
				win.attach(opl2_19);
				break;
			case 19:
				opl20.add(Point(((pos - 1) * 100) + 80, filapos));
				opl20.add(Point(pos * 100, filapos));
				opl20.add(Point(pos * 100, filapos - 25));
				opl20.add(Point(1000, filapos - 25));
				opl2_20.add(Point(5, (fila - 25)));
				opl2_20.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_20.add(Point((sPos - 1) * 100, fila));
				opl2_20.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl20);
				win.attach(opl2_20);
				break;
			case 20:
				opl21.add(Point(((pos - 1) * 100) + 80, filapos));
				opl21.add(Point(pos * 100, filapos));
				opl21.add(Point(pos * 100, filapos - 25));
				opl21.add(Point(1000, filapos - 25));


				opl2_21.add(Point(5, (fila - 25)));
				opl2_21.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_21.add(Point((sPos - 1) * 100, fila));
				opl2_21.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl21);
				win.attach(opl2_21);
				break;
			case 21:
				opl22.add(Point(((pos - 1) * 100) + 80, filapos));
				opl22.add(Point(pos * 100, filapos));
				opl22.add(Point(pos * 100, filapos - 25));
				opl22.add(Point(1000, filapos - 25));
				opl2_22.add(Point(5, (fila - 25)));
				opl2_22.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_22.add(Point((sPos - 1) * 100, fila));
				opl2_22.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl22);
				win.attach(opl2_22);
				break;
			case 22:
				opl23.add(Point(((pos - 1) * 100) + 80, filapos));
				opl23.add(Point(pos * 100, filapos));
				opl23.add(Point(pos * 100, filapos - 25));
				opl23.add(Point(1000, filapos - 25));
				opl2_23.add(Point(5, (fila - 25)));
				opl2_23.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_23.add(Point((sPos - 1) * 100, fila));
				opl2_23.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl23);
				win.attach(opl2_23);
				break;
			case 23:
				opl24.add(Point(((pos - 1) * 100) + 80, filapos));
				opl24.add(Point(pos * 100, filapos));
				opl24.add(Point(pos * 100, filapos - 25));
				opl24.add(Point(1000, filapos - 25));
				opl2_24.add(Point(5, (fila - 25)));
				opl2_24.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_24.add(Point((sPos - 1) * 100, fila));
				opl2_24.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl24);
				win.attach(opl2_24);
				break;
			case 24:
				opl25.add(Point(((pos - 1) * 100) + 80, filapos));
				opl25.add(Point(pos * 100, filapos));
				opl25.add(Point(pos * 100, filapos - 25));
				opl25.add(Point(1000, filapos - 25));
				opl2_25.add(Point(5, (fila - 25)));
				opl2_25.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_25.add(Point((sPos - 1) * 100, fila));
				opl2_25.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl25);
				win.attach(opl2_25);
				break;
			case 25:
				opl26.add(Point(((pos - 1) * 100) + 80, filapos));
				opl26.add(Point(pos * 100, filapos));
				opl26.add(Point(pos * 100, filapos - 25));
				opl26.add(Point(1000, filapos - 25));
				opl2_26.add(Point(5, (fila - 25)));
				opl2_26.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_26.add(Point((sPos - 1) * 100, fila));
				opl2_26.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl26);
				win.attach(opl2_26);
				break;
			case 26:
				opl27.add(Point(((pos - 1) * 100) + 80, filapos));
				opl27.add(Point(pos * 100, filapos));
				opl27.add(Point(pos * 100, filapos - 25));
				opl27.add(Point(1000, filapos - 25));
				opl2_27.add(Point(5, (fila - 25)));
				opl2_27.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_27.add(Point((sPos - 1) * 100, fila));
				opl2_27.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl27);
				win.attach(opl2_27);
				break;
			case 27:
				opl28.add(Point(((pos - 1) * 100) + 80, filapos));
				opl28.add(Point(pos * 100, filapos));
				opl28.add(Point(pos * 100, filapos - 25));
				opl28.add(Point(1000, filapos - 25));
				opl2_28.add(Point(5, (fila - 25)));
				opl2_28.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_28.add(Point((sPos - 1) * 100, fila));
				opl2_28.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl28);
				win.attach(opl2_28);
				break;
			}
		}
		else
		{
			switch (numnodo)
			{
			case 0:
				opl1.add(Point(((pos - 1) * 100) + 80, filapos));
				opl1.add(Point(pos * 100, filapos));
				opl1.add(Point(pos * 100, filapos - 25));
				opl1.add(Point(1000, filapos - 25));
				opl2_1.add(Point(5, (fila - 25)));
				opl2_1.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_1.add(Point((sPos - 1) * 100, fila));
				opl2_1.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl1);
				win.attach(opl2_1);
				break;
			case 1:
				opl2.add(Point(((pos - 1) * 100) + 80, filapos));
				opl2.add(Point(pos * 100, filapos));
				opl2.add(Point(pos * 100, filapos - 25));
				opl2.add(Point(1000, filapos - 25));
				opl2_2.add(Point(5, (fila - 25)));
				opl2_2.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_2.add(Point((sPos - 1) * 100, fila));
				opl2_2.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl2);
				win.attach(opl2_2);
				break;
			case 2:
				opl3.add(Point(((pos - 1) * 100) + 80, filapos));
				opl3.add(Point(pos * 100, filapos));
				opl3.add(Point(pos * 100, filapos - 25));
				opl3.add(Point(1000, filapos - 25));
				opl2_3.add(Point(5, (fila - 25)));
				opl2_3.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_3.add(Point((sPos - 1) * 100, fila));
				opl2_3.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl3);
				win.attach(opl2_3);
				break;
			case 3:
				opl4.add(Point(((pos - 1) * 100) + 80, filapos));
				opl4.add(Point(pos * 100, filapos));
				opl4.add(Point(pos * 100, filapos - 25));
				opl4.add(Point(1000, filapos - 25));
				opl2_4.add(Point(5, (fila - 25)));
				opl2_4.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_4.add(Point((sPos - 1) * 100, fila));
				opl2_4.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl4);
				win.attach(opl2_4);
				break;
			case 4:
				opl5.add(Point(((pos - 1) * 100) + 80, filapos));
				opl5.add(Point(pos * 100, filapos));
				opl5.add(Point(pos * 100, filapos - 25));
				opl5.add(Point(1000, filapos - 25));
				opl2_5.add(Point(5, (fila - 25)));
				opl2_5.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_5.add(Point((sPos - 1) * 100, fila));
				opl2_5.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl5);
				win.attach(opl2_5);
				break;
			case 5:
				opl6.add(Point(((pos - 1) * 100) + 80, filapos));
				opl6.add(Point(pos * 100, filapos));
				opl6.add(Point(pos * 100, filapos - 25));
				opl6.add(Point(1000, filapos - 25));
				opl2_6.add(Point(5, (fila - 25)));
				opl2_6.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_6.add(Point((sPos - 1) * 100, fila));
				opl2_6.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl6);
				win.attach(opl2_6);
				break;
			case 6:
				opl7.add(Point(((pos - 1) * 100) + 80, filapos));
				opl7.add(Point(pos * 100, filapos));
				opl7.add(Point(pos * 100, filapos - 25));
				opl7.add(Point(1000, filapos - 25));
				opl2_7.add(Point(5, (fila - 25)));
				opl2_7.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_7.add(Point((sPos - 1) * 100, fila));
				opl2_7.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl7);
				win.attach(opl2_7);
				break;
			case 7:
				opl8.add(Point(((pos - 1) * 100) + 80, filapos));
				opl8.add(Point(pos * 100, filapos));
				opl8.add(Point(pos * 100, filapos - 25));
				opl8.add(Point(1000, filapos - 25));
				opl2_8.add(Point(5, (fila - 25)));
				opl2_8.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_8.add(Point((sPos - 1) * 100, fila));
				opl2_8.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl8);
				win.attach(opl2_8);
				break;
			case 8:
				opl9.add(Point(((pos - 1) * 100) + 80, filapos));
				opl9.add(Point(pos * 100, filapos));
				opl9.add(Point(pos * 100, filapos - 25));
				opl9.add(Point(1000, filapos - 25));
				opl2_9.add(Point(5, (fila - 25)));
				opl2_9.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_9.add(Point((sPos - 1) * 100, fila));
				opl2_9.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl9);
				win.attach(opl2_9);
				break;
			case 9:
				opl10.add(Point(((pos - 1) * 100) + 80, filapos));
				opl10.add(Point(pos * 100, filapos));
				opl10.add(Point(pos * 100, filapos - 25));
				opl10.add(Point(1000, filapos - 25));
				opl2_10.add(Point(5, (fila - 25)));
				opl2_10.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_10.add(Point((sPos - 1) * 100, fila));
				opl2_10.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl10);
				win.attach(opl2_10);
				break;
			case 10:
				opl11.add(Point(((pos - 1) * 100) + 80, filapos));
				opl11.add(Point(pos * 100, filapos));
				opl11.add(Point(pos * 100, filapos - 25));


				opl11.add(Point(1000, filapos - 25));
				opl2_11.add(Point(5, (fila - 25)));
				opl2_11.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_11.add(Point((sPos - 1) * 100, fila));
				opl2_11.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl11);
				win.attach(opl2_11);
				break;
			case 11:
				opl12.add(Point(((pos - 1) * 100) + 80, filapos));
				opl12.add(Point(pos * 100, filapos));
				opl12.add(Point(pos * 100, filapos - 25));
				opl12.add(Point(1000, filapos - 25));
				opl2_12.add(Point(5, (fila - 25)));
				opl2_12.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_12.add(Point((sPos - 1) * 100, fila));
				opl2_12.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl12);
				win.attach(opl2_12);
				break;
			case 12:
				opl13.add(Point(((pos - 1) * 100) + 80, filapos));
				opl13.add(Point(pos * 100, filapos));
				opl13.add(Point(pos * 100, filapos - 25));
				opl13.add(Point(1000, filapos - 25));
				opl2_13.add(Point(5, (fila - 25)));
				opl2_13.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_13.add(Point((sPos - 1) * 100, fila));
				opl2_13.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl13);
				win.attach(opl2_13);
				break;
			case 13:
				opl14.add(Point(((pos - 1) * 100) + 80, filapos));
				opl14.add(Point(pos * 100, filapos));
				opl14.add(Point(pos * 100, filapos - 25));
				opl14.add(Point(1000, filapos - 25));
				opl2_14.add(Point(5, (fila - 25)));
				opl2_14.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_14.add(Point((sPos - 1) * 100, fila));
				opl2_14.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl14);
				win.attach(opl2_14);
				break;
			case 14:
				opl15.add(Point(((pos - 1) * 100) + 80, filapos));
				opl15.add(Point(pos * 100, filapos));
				opl15.add(Point(pos * 100, filapos - 25));
				opl15.add(Point(1000, filapos - 25));
				opl2_15.add(Point(5, (fila - 25)));
				opl2_15.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_15.add(Point((sPos - 1) * 100, fila));
				opl2_15.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl15);
				win.attach(opl2_15);
				break;
			case 15:
				opl16.add(Point(((pos - 1) * 100) + 80, filapos));
				opl16.add(Point(pos * 100, filapos));
				opl16.add(Point(pos * 100, filapos - 25));
				opl16.add(Point(1000, filapos - 25));
				opl2_16.add(Point(5, (fila - 25)));
				opl2_16.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_16.add(Point((sPos - 1) * 100, fila));
				opl2_16.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl16);
				win.attach(opl2_16);
				break;
			case 16:
				opl17.add(Point(((pos - 1) * 100) + 80, filapos));
				opl17.add(Point(pos * 100, filapos));
				opl17.add(Point(pos * 100, filapos - 25));
				opl17.add(Point(1000, filapos - 25));
				opl2_17.add(Point(5, (fila - 25)));
				opl2_17.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_17.add(Point((sPos - 1) * 100, fila));
				opl2_17.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl17);
				win.attach(opl2_17);
				break;
			case 17:
				opl18.add(Point(((pos - 1) * 100) + 80, filapos));
				opl18.add(Point(pos * 100, filapos));
				opl18.add(Point(pos * 100, filapos - 25));
				opl18.add(Point(1000, filapos - 25));
				opl2_18.add(Point(5, (fila - 25)));
				opl2_18.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_18.add(Point((sPos - 1) * 100, fila));
				opl2_18.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl18);
				win.attach(opl2_18);
				break;
			case 18:
				opl19.add(Point(((pos - 1) * 100) + 80, filapos));
				opl19.add(Point(pos * 100, filapos));
				opl19.add(Point(pos * 100, filapos - 25));
				opl19.add(Point(1000, filapos - 25));
				opl2_19.add(Point(5, (fila - 25)));
				opl2_19.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_19.add(Point((sPos - 1) * 100, fila));
				opl2_19.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl19);
				win.attach(opl2_19);
				break;
			case 19:
				opl20.add(Point(((pos - 1) * 100) + 80, filapos));
				opl20.add(Point(pos * 100, filapos));
				opl20.add(Point(pos * 100, filapos - 25));
				opl20.add(Point(1000, filapos - 25));
				opl2_20.add(Point(5, (fila - 25)));
				opl2_20.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_20.add(Point((sPos - 1) * 100, fila));
				opl2_20.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl20);
				win.attach(opl2_20);
				break;
			case 20:
				opl21.add(Point(((pos - 1) * 100) + 80, filapos));
				opl21.add(Point(pos * 100, filapos));
				opl21.add(Point(pos * 100, filapos - 25));
				opl21.add(Point(1000, filapos - 25));


				opl2_21.add(Point(5, (fila - 25)));
				opl2_21.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_21.add(Point((sPos - 1) * 100, fila));
				opl2_21.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl21);
				win.attach(opl2_21);
				break;
			case 21:
				opl22.add(Point(((pos - 1) * 100) + 80, filapos));
				opl22.add(Point(pos * 100, filapos));
				opl22.add(Point(pos * 100, filapos - 25));
				opl22.add(Point(1000, filapos - 25));
				opl2_22.add(Point(5, (fila - 25)));
				opl2_22.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_22.add(Point((sPos - 1) * 100, fila));
				opl2_22.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl22);
				win.attach(opl2_22);
				break;
			case 22:
				opl23.add(Point(((pos - 1) * 100) + 80, filapos));
				opl23.add(Point(pos * 100, filapos));
				opl23.add(Point(pos * 100, filapos - 25));
				opl23.add(Point(1000, filapos - 25));
				opl2_23.add(Point(5, (fila - 25)));
				opl2_23.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_23.add(Point((sPos - 1) * 100, fila));
				opl2_23.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl23);
				win.attach(opl2_23);
				break;
			case 23:
				opl24.add(Point(((pos - 1) * 100) + 80, filapos));
				opl24.add(Point(pos * 100, filapos));
				opl24.add(Point(pos * 100, filapos - 25));
				opl24.add(Point(1000, filapos - 25));
				opl2_24.add(Point(5, (fila - 25)));
				opl2_24.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_24.add(Point((sPos - 1) * 100, fila));
				opl2_24.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl24);
				win.attach(opl2_24);
				break;
			case 24:
				opl25.add(Point(((pos - 1) * 100) + 80, filapos));
				opl25.add(Point(pos * 100, filapos));
				opl25.add(Point(pos * 100, filapos - 25));
				opl25.add(Point(1000, filapos - 25));
				opl2_25.add(Point(5, (fila - 25)));
				opl2_25.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_25.add(Point((sPos - 1) * 100, fila));
				opl2_25.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl25);
				win.attach(opl2_25);
				break;
			case 25:
				opl26.add(Point(((pos - 1) * 100) + 80, filapos));
				opl26.add(Point(pos * 100, filapos));
				opl26.add(Point(pos * 100, filapos - 25));
				opl26.add(Point(1000, filapos - 25));
				opl2_26.add(Point(5, (fila - 25)));
				opl2_26.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_26.add(Point((sPos - 1) * 100, fila));
				opl2_26.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl26);
				win.attach(opl2_26);
				break;
			case 26:
				opl27.add(Point(((pos - 1) * 100) + 80, filapos));
				opl27.add(Point(pos * 100, filapos));
				opl27.add(Point(pos * 100, filapos - 25));
				opl27.add(Point(1000, filapos - 25));
				opl2_27.add(Point(5, (fila - 25)));
				opl2_27.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_27.add(Point((sPos - 1) * 100, fila));
				opl2_27.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl27);
				win.attach(opl2_27);
				break;
			case 27:
				opl28.add(Point(((pos - 1) * 100) + 80, filapos));
				opl28.add(Point(pos * 100, filapos));
				opl28.add(Point(pos * 100, filapos - 25));
				opl28.add(Point(1000, filapos - 25));
				opl2_28.add(Point(5, (fila - 25)));
				opl2_28.add(Point((sPos - 1) * 100, (fila - 25)));
				opl2_28.add(Point((sPos - 1) * 100, fila));
				opl2_28.add(Point(((sPos - 1) * 100) + 20, fila));
				win.attach(opl28);
				win.attach(opl2_28);
				break;
			}
		}
	}
}

