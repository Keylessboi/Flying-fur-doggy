#include "Linux_functions.hpp"
#include<unistd.h>
#include <cstdlib>
#include <time.h>
#include <iostream>
unsigned int microsecond = 100000;
void calculate() {
  std::cout << "\nC\n";
  usleep(3 * microsecond);
  std::cout << "A\n";
  usleep(3 * microsecond);
  std::cout << "L\n";
  usleep(3 * microsecond);
  std::cout << "U\n";
  usleep(3 * microsecond);
  std::cout << "L\n";
  usleep(3 * microsecond);
  std::cout << "A\n";
  usleep(3 * microsecond);
  std::cout << "T\n";
  usleep(3 * microsecond);
  std::cout << "I\n";
  usleep(3 * microsecond);
  std::cout << "N\n";
  usleep(3 * microsecond);
  std::cout << "G\n";
  usleep(3 * microsecond);
  std::cout << ".\n";
  usleep(3 * microsecond);
  std::cout << ".\n";
  usleep(3 * microsecond);
  std::cout << ".\n";
}
void lose() {
  std::cout << "You got stung! Fall back!";
}
