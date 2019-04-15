#pragma once
#include <vector>
#include <iostream>
#include <string>

using namespace std;
enum Tipo { variable, operador, numero, nulo };

struct Token {
	Tipo tipo;
	string tokenS;
	int num;
	char tokenC;

	Token(string st) { tipo = variable; tokenS = st; }
	Token(char s) { tipo = operador; tokenC = s; }
	Token(int n) { tipo = numero; num = n; }
	Token() : tipo{ nulo } { }
	Tipo demeTipo() { return tipo; }
	friend ostream& operator<<(ostream &os, Token & t);
	~Token() {};
};

ostream& operator <<(ostream &os, Token & t) {
	switch (t.tipo) {
	case variable: {
		os << "[" << t.tokenS << "]" << "<var>\n";
		break;
	}
	case operador:
		os << "[" << t.tokenC << "]" << "<opr>\n";
		break;
	case numero:
		os << "[" << t.num << "]" << "<num>\n";
		break;
	case nulo:
		os << "[ ]" << "<nul>\n";
		break;
	}
	return os;
}

class Tokenizador {
private:
	int pos;
	string tira;
public:
	Tokenizador(string entrada);
	Token demeToken();
};

Tokenizador::Tokenizador(string entrada) {
	tira = entrada;
	pos = 0;
}

Token Tokenizador::demeToken() {
	if (pos >= tira.length())
		return Token();

	while (pos < tira.length() && tira[pos] == ' ') pos++; // Omite blancos

	if (isalpha(tira[pos])) {
		string s = "";
		while (isalpha(tira[pos])) s.push_back(tira[pos++]);
		return Token(s);
	}
	if (isdigit(tira[pos])) {
		int v = 0;
		while (isdigit(tira[pos])) v = v * 10 + tira[pos++] - '0';
		return Token(v);
	}
	if (tira[pos] == '+' || tira[pos] == '-' ||
		tira[pos] == '*' || tira[pos] == '/') {
		return Token(tira[pos++]);
	}
	pos++;
	return Token();
}



