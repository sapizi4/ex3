
#ifndef EX3_PRINTCOMMAND_H
#define EX3_PRINTCOMMAND_H
#include "Command.h"

class PrintCommand:public Command{
    int &index;
    string str;
public:
    void execute(const vector<string>&cur_lex);
    PrintCommand(int &index);
};
#endif //EX3_PRINTCOMMAND_H
