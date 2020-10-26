//
// Created by btnt51 on 25.10.2020.
//

#include "Interpretator.h"


Interpretator::Interpretator()
{
	parser.startingPars();
	m_ArrayOfCommands = parser.getArrayOfCommands();
	Command command;
	command.startingCommand();
}

Interpretator::~Interpretator()
{

}

Interpretator::Command::Command()
{

}

void Interpretator::Command::startingCommand()
{
	int k = 0, flag = -1;
	for(int i = 0; i < Interpretator::m_ArrayOfCommands.size();i++){
		comand = Interpretator::m_ArrayOfCommands[i];
		while (comand[k] != '\0')
		{
			if(comand[k] == '\"')
			{
				if (flag < 0)
				{
					flag = k;
				} else
				{
					for(int j = flag; j < k;j++)
						std::cout << comand[j];
					flag = -1;
				}
			}
			k++;
		}
	}
}
