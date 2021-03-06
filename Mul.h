
#ifndef EX3_MUL_H
#define EX3_MUL_H


#include "BinaryExpression.h"
#include "Number.h"

using namespace std;

class Mul: public BinaryExpression{
public:
    Mul(Number val1,Number val2);
    Mul(Expression* val1,Number val2);
    Mul(Number val1, Expression* val2);
    Mul(Expression* val1,Expression* val2);
    double calculate();
    ~Mul();
};

#endif //EX3_MUL_H
