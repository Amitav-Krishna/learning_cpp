#include <iostream>

int getValueFromUser ()
  {
    std::cout << "Give me an integer: ";
    int x{ };
    std::cin >> x;
    return x;

  }
void doubleNumber (int num)
  {
    std::cout << num << " doubled is " << num*2 << ".\n";
  }

int main()
  {
    int x = getValueFromUser();
    doubleNumber(x);
    return 0;
  }
