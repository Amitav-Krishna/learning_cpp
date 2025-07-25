#include <iostream>
#include <cmath>
int five()
{
    return 5;
}

int main()
{
    int a{ 2 }; // Initialised with literal value of 2
    int b{ 2 + 3 }; // Intialised with computed value of 5
    int c{ (2*3) + 4}; // Initialised with computed value of 10
    int d{b}; // Initialised with variable value of 2
    int e{ five() }; // Initialised with function return value of 5

    // Literals evaluate to their own values, variables evaluate to the value of the variable, operators use their operands to evaluate to some other value, and function calls evaluate to whatever value the function returns
    // x = 5 has the side effect of assigning 5 to x, which evaluates to x
    // x = 2 + 3 has the side effect of assigning 5 to x, evaluates to x
    // std::cout << x has the side effect of printing x to console, evaluates to std::cout
    // An exxpresion is a non-empty sequence of literals, variables, operatorss, and function calls that calculates a value
    // Statements are used wheen we want the program to perform an action. Expressions are used when we want the program to calculate a value
    // A subexpression is an expression used as an operand

    return 0;
}
