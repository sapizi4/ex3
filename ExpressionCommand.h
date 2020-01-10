
#ifndef EX3_EXPRESSIONCOMMAND_H
#define EX3_EXPRESSIONCOMMAND_H
#include "Command.h"
#include "Expression.h"

class ExpressionCommand:public Expression{
protected:
    Command *command;
    vector<string> lexer;
    int index;
public:
    ExpressionCommand(Command *command, const vector<string> &cur_lex);

    virtual double calculate();
};
#endif //EX3_EXPRESSIONCOMMAND_H
