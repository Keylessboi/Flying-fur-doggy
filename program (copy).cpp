/* For this project, I have decided to make a story based on the one my dad would tell me every night "The adventures of the flying fur doggy"
for the record furdo is indeed pronounced (f-UR-do) */
/*
You and the flying fur (f-UR) doggys (dau-WG-ys) infiltrate the tower held by the bees. You need to use your furdo attacks to attack the furdo of the bee and take over the tower without dying */
#include "Windows_functions.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <chrono>
#include <thread>
using namespace std;
int main() {
srand(time(0));
int answer;
int i = 0;
int random1 = rand();
int random2 = rand();
cout << "Welcome to THE ATTACK OF THE FUR DOGGYS\n\n";
cout << "You are with your flying fur doggys getting ready to attack the furdo of the tower of bees!\n";
cout << "You are the general of the great flying fur doggy nation. But dispite your empire having many many fur doggys in your empire only 5 have been provided on the misson due to it being extremely dangerous\n";
cout << "After flying for hours, you and your fellow fur dogs approch a cobblestone tower buzzing with... BEES!!";
cout << "There are 2 windows on the tower, what do you do?\n\n\n";
//test();
while (answer != 1 and answer != 2) {
  cout << "1) You can fly up higher, within the defenses of the horrible bees\n\n\n\n2) You can fly lower and hopefully miss the bees but maybe hit the tower!";
  cout << "  Answer: ";
  cin >> answer;
}
switch (answer) {
  case 1:
  cout << "You aim for the top window! And...";
  calculate();
  calculate();
  calculate();
    if (random1 % 2 == 0) {
    cout << "Close one! You made it in\n";
  }
  else {
    lose();
  }
  break;
  
  case 2:
    cout << "You aim for the bottom window! And...";
  calculate();
  calculate();
  calculate();
  if (random1 % 2 == 0) {
    cout << "Close one! You made it in\n";
  }
  else {
    lose();
  }
  default:
    break;
  }

answer = 0;
cout << "You reach upon a hallway.. Within this hallway lies to directions. Choose wisely\n\n";
while (answer != 1 and answer != 2) {
  cout << "1) Go left (Where many bees are guarding the explosives)\n\n\n\n2) Go right (Less bees so you can attack their FUR one by one)";
  cout << "  Answer: ";
  cin >> answer;
}
switch (answer)
{
case 1:
  cout << "You go left, bees instantly notice you and start sorrunding.. Lets see if you have a chance!";
  calculate();
  calculate();
  calculate();

  if (random2 % 2 == 0) {
    cout << "After taking one bee hostage my holding his extremely fluffy fur. You drive him around and stick out your hands attacking the other bees as you fly!\n";
  }
  else {
    lose();
    
  }
  break;
  case 2:
  cout << "You go right, you know taking these bees are going to be easy. Lets see if you do it...";
  calculate();
  calculate();
  calculate();

  if (random1 % 2 == 0) {
    cout << "You take one bee and slam it into the other and attack their fur!\n";
  }
  else {
    lose();
    
  }
  break;
default:
  break;
}
answer = 0;
cout << "Your entire team is here.. There are not many bees left, although outnumbered you know this is the only way out. Other than that door over there, do you want to leave through the door?";
while (answer != 1 and answer != 2) {
  cout << "\n\n1) No\n\n\n2) Yes\n";
  cout << "  Answer: ";
  cin >> answer;
}
switch (answer)
{
case 1:
  calculate();
  calculate();
  calculate();
  cout << "You and your friends...";
  
  if (random1 + random2 % 2 == 0) {
    cout << " grab the bees by their fur and attack it all over!! The bees fall and the fur empire reigns supreme";
  }
  else {
    lose();
    
  }
  break;
case 2:
  calculate();
  calculate();
  calculate();
  cout << "You and your friends...";
  
  if (random1 + random2 % 2 == 0) {
    cout << " leave safely and unscathed by the battle";
  }
  else {
    lose();
  }
  break;

default:
  break;
}
this_thread::sleep_for(chrono::seconds(100));
return(0);
}

