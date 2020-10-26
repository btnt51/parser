//
// Created by btnt51 on 25.10.2020.
//

#ifndef PARSER_INTERPRETATOR_H
#define PARSER_INTERPRETATOR_H
#include <vector>
#include <string>
#include "Parser.h"

class Interpretator
{
private:
	static std::vector <std::string> m_ArrayOfCommands;
	Parser parser;
	class Command{
	private:
		//перечисление ключевых слов(print, var, func и т.д.)
		std::string comand;
	public:
		Command();
		~Command();
		void startingCommand();

	};
public:
	Interpretator();
	~Interpretator();
	void startingInterpretator();
	void reloadingInterpretator();
};


#endif //PARSER_INTERPRETATOR_H
