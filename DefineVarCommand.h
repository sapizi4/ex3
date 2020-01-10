
#ifndef EX3_DEFINEVARCOMMAND_H
#define EX3_DEFINEVARCOMMAND_H


#include "Command.h"
#include "string"
#include "MapDB.h"
#include "Expression.h"

class DefineVarCommand : public Command {
    int &index;
    string name;
    string bindPath;
    Expression* expression = nullptr;
    MapDB* db;
public:
    void execute(const vector<string>&cur_lex);
    DefineVarCommand(int &index);
};
#endif //EX3_DEFINEVARCOMMAND_H
