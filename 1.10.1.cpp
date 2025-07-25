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

    return 0;
}
