#pragma once
#include <vector>
#include "Tokenizador.h"
class Parser
{
public:
	void Parse(vector<Token> parseTree);

private:

};

void Parser::Parse(vector<Token>parseTree)
{
	Token primero = parseTree.front();
	if (primero.tipo == variable) {
		if (true)
		{

		}
	}

}