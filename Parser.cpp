#include "Parser.h"

Parser::Parser(){
	length = 0;
	lines = 0;
	m_file.open("../sample.txt", std::ios::in);
	if(!m_file)
	{
		std::cout << "bad dir" << std::endl;
		return;
	}
	startingPars();
}

Parser::~Parser()
{
    m_file.close();
    delete[] m_string;
}

void Parser::startingPars()
{
	m_file.seekg(0, std::ios_base::end);
	length= m_file.tellg();
	m_file.seekg(0);
	m_string = new char[length+ 1];
	m_file.read(m_string, length);
	m_string[length] = '\0';
	for(int i = 0; i < length; i++)
		std::cout << m_string[i];
	countingLines();
	std::cout << "\n lines " << lines << std::endl;
	separCommands();
}

void Parser::countingLines()
{
	int i = 0;
	lines = 0;
	while(m_string[i] != '\0')
	{
		if(m_string[i]=='\n')
			lines++;
		i++;
	}
}

void Parser::separCommands()
{
	int counter = 0, newCommand = 0, counterC = 0;
	while(m_string[counter] != '\0')
	{
		if(m_string[counter] == '\n')
		{
			std::string Command;
			for(int i = newCommand; i < counter;i++)
			{
				Command.push_back(m_string[i]);
				counterC++;
			}
			Command[counterC] = '\0';
			counterC = 0;
			newCommand = counter;
			arrayOfCommands.push_back(Command);
		}
		counter++;
	}
	counter = 0;
	std::cout << "\nsep commands" << std::endl;
	/*for(auto & arrayOfCommand : arrayOfCommands)
		std::cout << arrayOfCommand << std::endl;*/
}

