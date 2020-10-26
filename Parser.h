#ifndef PARSER
#define PARSER
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

class Parser
{
private:
    std::ifstream m_file;
    char *m_string;
    int length;
    std::vector<std::string> arrayOfCommands;
    int lines;
public:
    Parser();
    ~Parser();
    void startingPars();
    void countingLines();
    void separCommands();
	std::vector<std::string> getArrayOfCommands(){ return arrayOfCommands;}
};



#endif // !PARSER
