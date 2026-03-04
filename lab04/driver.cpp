// TO DO: Implement the driver main() function to test your code.

#include <iostream>
#include <string>
#include "LinkedList.hpp"

int main(int argc, char **argv) {
  LinkedList<int> a;
  a.append(10);
  a.append(20);
  a.append(30);
  a.append(40);

  std::cout << a;
  std::cout << a.getLength() << '\n';

  std::cout << a.getElement(0) << '\n';
  std::cout << a.getElement(3) << '\n';

  try {
    a.getElement(-1);
  }
  catch (std::string &e) {
    std::cout << "error: ";
  }

  a.replace(0, 5);

  std::cout << a;

  try {
    a.replace(-1, 5);
  }
  catch (std::string &e) {
    std::cout << "error: ";
  }

}

  
      
