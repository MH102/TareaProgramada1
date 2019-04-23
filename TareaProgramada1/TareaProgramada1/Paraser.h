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

	if (parseTree.size() < 3) {
		return "false";
	}
	Token primero = parseTree.front();
	Token next = parseTree.at(1);
	if (primero.tipo == variable) {
		if (primero.tokenS[0] >= 97 && primero.tokenS[0] <= 122 && primero.tokenS.length() == 1)
		{
			if (next.tokenC == '=') {
				if (parseTree.at(2).tokenS == "new" && parseTree.at(3).tokenS == "Nodo") {
					return "New Nodo";
				}
				else {
					if (parseTree.at(2).tipo == numero) { return "valor"; }
				}
				cout << "sif";
			}
			if (parseTree.at(3).tokenS == "sig") {
				return "asignacion";
			}
		}
	}
	else if (primero.tipo == operador)
	{
		if (primero.tokenS=="While")
		{
			if (parseTree.at(2).demeTipo() == variable && parseTree.at(2).tokenS[0] >= 97 && parseTree.at(2).tokenS[0] <= 122 && parseTree.at(2).tokenS.length() == 1) {
				return "Whileasig";
			}
			return "";
		}
		if (primero.tokenS == "Repeat")
		{
			if (parseTree.at(2).demeTipo() == numero ) {
				return "Repeat";
			}
		

		}
	}
	return "false";
	
};