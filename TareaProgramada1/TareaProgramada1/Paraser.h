#pragma once
#include <vector>
#include "Tokenizador.h"

class Parser
{
public:
	bool Parse(vector<Token> parseTree);

private:

};

bool Parser::Parse(vector<Token>parseTree)
{


	Token primero = parseTree.front();
	if (primero.tipo == variable) {
		if (primero.tokenS[0] >= 97 && primero.tokenS[0] <= 122 && primero.tokenS.length() == 1)
		{
			cout << "sif";
			return true;
		}
	}
	else if (primero.tipo == operador)
	{
		if (primero.tokenS=="While")
		{
			cout << "yeet";
			return true;
		}
		if (primero.tokenS == "Repeat")
		{
			cout << "yeetus that feetus";
			return true;
		}
	}
	return false;
	
};