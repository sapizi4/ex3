
#ifndef EX3_MINUS_H
#define EX3_MINUS_H
#include "BinaryExpression.h"
#include "Number.h"

using namespace std;

class Minus: public BinaryExpression {
public:
    Minus(Number val1,Number val2);
    Minus(Expression* val1,Number val2);
    Minus(Number val1, Expression* val2);
    Minus(Expression* val1,Expression* val2);
    double calculate();
    ~Minus();

};
#endif //EX3_MINUS_H
