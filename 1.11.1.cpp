#include <iostream>


int main()
  {
    std::cout << "Enter an integer: ";
    int x{ };
    std::cin >> x;
    int y{ };
    int multiplier{ 2 };
    y = multiplier * x;
    std::cout <<"Double that number is: " << y << std::endl;
  }
