#ifndef HAST
#define HAST

#include <string>
#include "Token.h"
#include <memory>
using namespace std;
/*
异形语法树
*/
class HeteroAST
{
public:
    HeteroAST(const Token& t);
    //~HeteroAST();
    //string toString();
    //virtual void print() = 0;
protected:
    //Token token;
    shared_ptr<Token> tp;
};
HeteroAST::HeteroAST(const Token& t):tp(new Token(t)) {
}
#endif // !HAST
