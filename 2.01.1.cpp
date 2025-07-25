#include <iostream>

void doB()
  {
    // starting function body
    std::cout << "In doB()\n";
    //ending function body
  }

void doA()
  {
    // starting function body
    std::cout << "Starting doA()\n";
    doB();
    std::cout << "Ending doA()\n";
    //ending function body
  }

int main()
  {
    // starting function body
    std::cout << "Starting main()\n";
    doA();
    std::cout << "Ending main()\n";
    //ending function body
      }
