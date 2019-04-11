#include "Graph.h"
#include "Window.h"
#include "Simple_window.h"
using namespace Graph_lib;
class Node {
	Graph_lib::Rectangle r{ Point{20,40},30,30 };
	Graph_lib::Rectangle r2{ Point{50,40},30,30 };
	Circle c{ Point(65, 55), 10 };
	Text t{ Point{30,60},""};
	Node *sig;
	int x;
	int p;
	public:
		Node(int num, int pos, Node *nodo) {
			x = num;
			sig = nodo;
			p = pos;
			mov(p);
			t.set_label(to_string(x));
			t.set_font(Font::times_bold);
			t.set_color(Color::black);
			c.set_color(Color::black);
			c.set_fill_color(Color::blue);
			r.set_color(Color::black);
			r.set_fill_color(Color::blue);
			r2.set_color(Color::black);
			r2.set_fill_color(Color::yellow);
		}
		Node(int num, int pos) {
			x = num;
			sig = NULL;
			p = pos;
			mov(p);
			t.set_label(to_string(x));
			t.set_font(Font::times_bold);
			t.set_color(Color::white);
			c.set_color(Color::black);
			c.set_fill_color(Color::blue);
			r.set_color(Color::black);
			r.set_fill_color(Color::blue);
			r2.set_color(Color::black);
			r2.set_fill_color(Color::yellow);
		}
		void attach(Simple_window &win) {
			win.attach(c);
			win.attach(r);
			win.attach(r2);
			win.attach(t);
			win.put_on_top(r2);
			win.put_on_top(c);
			win.put_on_top(t);
		}
		Node* insert(int x) {
			Node *h = sig;
			Node *node;
			if (h) {
				while (h->sig) {
					h = h->sig;
				}
				node = new Node(x, h->p + 1);
				h->sig = node;
			}
			else {
				node = new Node(x, p + 1);
				sig = node;
			}
			return node;
		}
		void mov(int pos) {
			switch (pos) {
				case 1:
					break;
				case 2:
					r.move(100,0);
					r2.move(100, 0);
					t.move(100, 0);
					c.move(100, 0);
					break;
				case 3:
					r.move(200, 0);
					r2.move(200, 0);
					t.move(200, 0);
					c.move(200, 0);
					break;
				case 4:
					r.move(300, 0);
					r2.move(300, 0);
					t.move(300, 0);
					c.move(300, 0);
					break;
				case 5:
					r.move(400, 0);
					r2.move(400, 0);
					t.move(400, 0);
					c.move(400, 0);
					break;
				case 6:
					r.move(500, 0);
					r2.move(500, 0);
					t.move(500, 0);
					c.move(500, 0);
					break;
				case 7:
					r.move(600, 0);
					r2.move(600, 0);
					t.move(600, 0);
					c.move(600, 0);
					break;
				case 8:
					r.move(0, 100);
					r2.move(0, 100);
					t.move(0, 100);
					c.move(0, 100);
					break;
				case 9:
					r.move(100, 100);
					r2.move(100, 100);
					t.move(100, 100);
					c.move(100, 100);
					break;
				case 10:
					r.move(200, 100);
					r2.move(200, 100);
					t.move(200, 100);
					c.move(200, 100);
					break;
				case 11:
					r.move(300, 100);
					r2.move(300, 100);
					t.move(300, 100);
					c.move(300, 100);
					break;
				case 12:
					r.move(400, 100);
					r2.move(400, 100);
					t.move(400, 100);
					c.move(400, 100);
					break;
				case 13:
					r.move(500, 100);
					r2.move(500, 100);
					t.move(500, 100);
					c.move(500, 100);
					break;
				case 14:
					r.move(600, 100);
					r2.move(600, 100);
					t.move(600, 100);
					c.move(600, 100);
					break;
				case 15:
					r.move(0, 200);
					r2.move(0, 200);
					t.move(0, 200);
					c.move(0, 200);
					break;
				case 16:
					r.move(100, 200);
					r2.move(100, 200);
					t.move(100, 200);
					c.move(100, 200);
					break;
				case 17:
					r.move(200, 200);
					r2.move(200, 200);
					t.move(200, 200);
					c.move(200, 200);
					break;
				case 18:
					r.move(300, 200);
					r2.move(300, 200);
					t.move(300, 200);
					c.move(300, 200);
					break;
				case 19:
					r.move(400, 200);
					r2.move(400, 200);
					t.move(400, 200);
					c.move(400, 200);
					break;
				case 20:
					r.move(500, 200);
					r2.move(500, 200);
					t.move(500, 200);
					c.move(500, 200);
					break;
				case 21:
					r.move(600, 200);
					r2.move(600, 200);
					t.move(600, 200);
					c.move(600, 200);
					break;
				case 22:
					r.move(0, 300);
					r2.move(0, 300);
					t.move(0, 300);
					c.move(0, 300);
					break;
				case 23:
					r.move(100, 300);
					r2.move(100, 300);
					t.move(100, 300);
					c.move(100, 300);
					break;
				case 24:
					r.move(200, 300);
					r2.move(200, 300);
					t.move(200, 300);
					c.move(200, 300);
					break;
				case 25:
					r.move(300, 300);
					r2.move(300, 300);
					t.move(300, 300);
					c.move(300, 300);
					break;
				case 26:
					r.move(400, 300);
					r2.move(400, 300);
					t.move(400, 300);
					c.move(400, 300);
					break;
				case 27:
					r.move(500, 300);
					r2.move(500, 300);
					t.move(500, 300);
					c.move(500, 300);
					break;
				case 28:
					r.move(600, 300);
					r2.move(600, 300);
					t.move(600, 300);
					c.move(600, 300);
					break;
				default:
					break;
			}
			return;
		}
};