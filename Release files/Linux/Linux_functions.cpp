#include "Linux_functions.hpp"
#include <unistd.h>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <iostream>

using namespace std;
void playsans() {
    system("mpg123 -q -C just-sans-talking.mp3 &");
    usleep(1 * 1000000);
    system("pkill mpg123");
}

void playtype() {
    system("mpg123 -q -C typewriter-1.mp3 &");

    usleep(3 * 100000);
}

unsigned int microsecond = 100000;

void calculate() {
    playtype();
    usleep(3 * 1000000);
    cout << "\nC\n";
    usleep(3 * microsecond);
    cout << "A\n";
    usleep(3 * microsecond);
    cout << "L\n";
    usleep(3 * microsecond);
    cout << "U\n";
    usleep(3 * microsecond);
    cout << "L\n";
    usleep(3 * microsecond);
    cout << "A\n";
    usleep(3 * microsecond);
    cout << "T\n";
    usleep(3 * microsecond);
    cout << "I\n";
    usleep(3 * microsecond);
    cout << "N\n";
  usleep(3 * microsecond);
  cout << "N\n";
  usleep(3 * microsecond);
  cout << "G\n";
  usleep(3 * microsecond);
  cout << ".\n";
  usleep(3 * microsecond);
  cout << ".\n";
  usleep(3 * microsecond);
  cout << ".\n";
  system("pkill mpg123");
}
void lose() {
  cout << "You got stung! Fall back!";
}
