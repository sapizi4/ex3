#ifndef EX3_COMMAND_H
#define EX3_COMMAND_H

#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <thread>
using namespace std;

using namespace std;
class Command {
public:
    virtual void execute(const vector<string>&lexer)=0;
    ~Command(){};
};

#endif //EX3_COMMAND_H
