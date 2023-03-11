//
// Created by haohe on 2023/3/2.
//

#include "fundamentals.h"
#include "iostream"

using namespace std;

void arithmic();

void assignment_operators();


void decrement_and_increment();
/*
* every expression in c++ is either an rvalue or an lvalue .
*
* 1. lvalue can stand on the left-hand side of an assignment, but rvalue can not.
*
* 2. when we use an object as rvalue, we use the object's content.
*                          as lvalue, we use the object's identity(address in memory)
*
* 3. lvalue can be used when a rvalue is required, and the content is used
*    rvalue can not be used when a lvalue is required.
* */

int main(){

    cout << "Begin of arithmic func" << endl;
    arithmic();

    cout << "Begin of assignment operators" << endl;
    assignment_operators();

}


void arithmic(){
    /*
    *
    * fraction in c plus plus
    *
    *       new standard requires to round toward zero.
    *
    *       (m / n) * n + m % n = m
    *
    *       -21 % 5 = -1  (-21 / 5) * 5 + (-1) = -21
    *
    * */
    cout << (-21 % 5) << endl;

    /*
    * relational operator
    *   Attention!!!
    *   if (value == True ) {}        True only when value = 1
    *   when value is not a bool, then the compiler converts true to the type of value
    *
    * */

    // result is True only when value = 1
    int value = 1;
    cout << (value == true) << endl;


    /*
    * exercise 4.3
    * */

    const char *cp = "\0";
    // cp si a pointer, so left side of && is always true
    // then the results depends on *cp, so it can be simplified into (*cp != 0)
    // false only when *cp = "\0" "\0" = Null
    cout << (cp && *cp) << endl;
}


void assignment_operators(){
    /*
    * brace assignment
    *       k = {3}         // ok
    *       k = {3.14}      // error: narrowing conversion
    * $ if the left-hand operand is a build-in type, the initializer list can contain at most one element
    *       and must not require a narrowing conversion
    * $
    * */
    int k = 0;
    k = {3};
    cout << "new k is " << k << endl;


    /*
    * compand assignments
    *
    *   += -= *=
    *   is eauql to a = a op b
    *
    * differences :
    *       if we use compound operators, the left operand is evaluated once.
    *                 ordinary operators, the left operand is evaluated twice,
    *                       1. once in right expressions
    *                       2. twice in assignment expressions
    *
    * */

}


void decrement_and_increment(){
    /*
    * 1. increment and decrement, two styles
    *
    *           prefix style    ++p/--p,    takes lvalue operand, return p+/-1          output itself as lvalue
    *           postfix style   p++/p--,    takes lvalue operand, return a copy=p       output rvalue
    *
    * 2. associate with pointer
    *
    *           ues postfix when we want current value
    *
    *           *pt++   ->  *(pt++)
    *
    *           - right expression returns copy of pt befor increment
    *           - deference the copy pointer, get current value
    *
    *   !!!!Attention:    precedence of in(de)crement is higher than dereference operator
    * */

}