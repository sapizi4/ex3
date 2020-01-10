
#ifndef EX3_IFCOMMAND_H
#define EX3_IFCOMMAND_H
#include "ConditionParser.h"

class IfCommand:public Command{
    int &index;
    ConditionParser conditionParser;
public:
    void execute(const vector<string>&lexer);
    IfCommand(int &index);
};

#endif //EX3_IFCOMMAND_H
