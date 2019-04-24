#pragma once
#include <vector>
#include "Tokenizador.h"
class Parser
{
public:
	string Parse(vector<Token> parseTree);

private:

};

string Parser::Parse(vector<Token>parseTree)
{
	Token primero;
	Token next;
	if (parseTree.size() <= 2) {
		if (parseTree.size() == 1 && parseTree.front().tokenS == "heapback") {
			parseTree.push_back(Token(28));
			return "heapback";
		}
		else {
			return "heapback";
		}
	}
	if (parseTree.size() < 3) {
		return "false";
	}
	primero = parseTree.front();
	next = parseTree.at(1);
	if (primero.tokenS == "repeat" && parseTree.at(2).num > 0) {
		return "repeat";
	}
	if (primero.tipo == variable) {
		if (primero.tokenS[0] >= 97 && primero.tokenS[0] <= 122 && primero.tokenS.length() == 1)
		{
			if (next.tokenC == '=') {
				if (parseTree.at(2).tokenS == "new" && parseTree.at(3).tokenS == "Nodo") {
					return "New Nodo";
				}
				else {
					if (parseTree.at(2).tipo == numero) { return "valor"; }
					else {
						next = parseTree.at(2);
						if (next.tokenS[0] >= 97 && next.tokenS[0] <= 122 && next.tokenS.length() == 1) {
							return "Nodo a Nodo";
						}
					}
				}
				cout << "sif";
			}
			if (parseTree.at(3).tokenS == "sig" || parseTree.at(3).tokenS == "v") {
				return "asignacion";
			}
		}
	}
	return "false";



	

};