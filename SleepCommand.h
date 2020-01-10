
#ifndef EX3_SLEEPCOMMAND_H
#define EX3_SLEEPCOMMAND_H
#include "Command.h"

class SleepCommand:public Command{
    int &index;
public:
    void execute(const vector<string>&cur_lex);
    SleepCommand(int &index);
};
#endif //EX3_SLEEPCOMMAND_H
