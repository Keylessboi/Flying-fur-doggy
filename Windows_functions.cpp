#include "Windows_functions.hpp"
#include <unistd.h>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void calculate() {
    cout << "\nC\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "A\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "L\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "U\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "L\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "A\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "T\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "I\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "N\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "G\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << ".\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << ".\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << ".\n";
}

void lose() {
    cout << "You got stung! Fall back!";
}
