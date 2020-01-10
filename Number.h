
#ifndef EX3_NUMBER_H
#define EX3_NUMBER_H
#include "Expression.h"
using namespace std;

class Number : public Expression {
private:
    double value;
public:
    Number(double val);
    Number(char c1,double val);
    double calculate();
    ~Number();
};
#endif //EX3_NUMBER_H
