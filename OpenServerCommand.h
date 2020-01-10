#ifndef EX3_OPENSERVERCOMMAND_H
#define EX3_OPENSERVERCOMMAND_H
#include <string>
#include "Command.h"
#include "map"
#include "DataReaderServer.h"
/**
 * A class which opens a thread which opens a server that listens to a specific given port
 */
// TODO: finish class
class OpenServerCommand : public Command {
    int &index;

public:
    void execute(const vector<string> &cur_lex);
    OpenServerCommand(int &index);
};
#endif //EX3_OPENSERVERCOMMAND_H
