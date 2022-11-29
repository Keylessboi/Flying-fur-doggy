/* For this project, I have decided to make a story based on the one my dad would tell me every night "The adventures of the flying fur doggy"
for the record furdo is indeed pronounced (f-UR-do) */
/*
You and the flying fur (f-UR) doggys (dau-WG-ys) infiltrate the tower held by the bees. You need to use your furdo attacks to attack the furdo of the bee and take over the tower without dying */
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
void calculate() {
  std::cout << "\nC\n";
  Sleep(3000);
  std::cout << "A\n";
  Sleep(3000);
  std::cout << "L\n";
  Sleep(3000);
  std::cout << "U\n";
  Sleep(3000);
  std::cout << "L\n";
  Sleep(3000);
  std::cout << "A\n";
  Sleep(3000);
  std::cout << "T\n";
  Sleep(3000);
  std::cout << "I\n";
  Sleep(3000);
  std::cout << "N\n";
  Sleep(3000);
  std::cout << "G\n";
  Sleep(3000);
  std::cout << ".\n";
  Sleep(3000);
  std::cout << ".\n";
  Sleep(3000);
  std::cout << ".\n";
}
void lose() {
  std::cout << "You got stung! Fall back!";
}
int main() {
srand(time(0));
int answer;
int i = 0;
int random1 = rand();
int random2 = rand();
std::cout << "Welcome to THE ATTACK OF THE FUR DOGGYS\n\n";
std::cout << "You are with your flying fur doggys getting ready to attack the furdo of the tower of bees!\n";
std::cout << "You are the general of the great flying fur doggy nation. But dispite your empire having many many fur doggys in your empire only 5 have been provided on the misson due to it being extremely dangerous\n";
std::cout << "After flying for hours, you and your fellow fur dogs approch a cobblestone tower buzzing with... BEES!!";
std::cout << "There are 2 windows on the tower, what do you do?\n\n\n";
//test();
while (answer != 1 and answer != 2) {
  std::cout << "1) You can fly up higher, within the defenses of the horrible bees\n\n\n\n2) You can fly lower and hopefully miss the bees but maybe hit the tower!";
  std::cout << "  Answer: ";
  std::cin >> answer;
}
if (answer == 1) {
  std::cout << "You aim for the top window! And...";
  calculate();
  calculate();
  calculate();

  if (random1 % 2 == 0) {
    std::cout << "Close one! You made it in\n";
  }
  else {
    lose();
    return(0);
  }
} else {
  std::cout << "You aim for the bottom window! And...";
  calculate();
  calculate();
  calculate();
  if (random1 % 2 == 0) {
    std::cout << "Close one! You made it in\n";
  }
  else {
    lose();
    return(0);
  }

}
answer = 0;
std::cout << "You reach upon a hallway.. Within this hallway lies to directions. Choose wisely\n\n";
while (answer != 1 and answer != 2) {
  std::cout << "1) Go left (Where many bees are guarding the explosives)\n\n\n\n2) Go right (Less bees so you can attack their FUR one by one)";
  std::cout << "  Answer: ";
  std::cin >> answer;
}
if (answer == 1) {
  std::cout << "You go left, bees instantly notice you and start sorrunding.. Lets see if you have a chance!";
  calculate();
  calculate();
  calculate();

  if (random2 % 2 == 0) {
    std::cout << "After taking one bee hostage my holding his extremely fluffy fur. You drive him around and stick out your hands attacking the other bees as you fly!\n";
  }
  else {
    lose();
    return(0);
  }

}
if (answer == 2) {
  std::cout << "You go right, you know taking these bees are going to be easy. Lets see if you do it...";
  calculate();
  calculate();
  calculate();

  if (random1 % 2 == 0) {
    std::cout << "You take one bee and slam it into the other and attack their fur!\n";
  }
  else {
    lose();
    return(0);
  }
  
}
answer = 0;
std::cout << "Your entire team is here.. There are not many bees left, although outnumbered you know this is the only way out. Other than that door over there, do you want to leave through the door?";
while (answer != 1 and answer != 2) {
  std::cout << "\n\n1) No\n\n\n2) Yes\n";
  std::cout << "  Answer: ";
  std::cin >> answer;
}
if (answer == 1) {
  calculate();
  calculate();
  calculate();
  std::cout << "You and your friends...";
  
  if (random1 + random2 % 2 == 0) {
    std::cout << " grab the bees by their fur and attack it all over!! The bees fall and the fur empire reigns supreme";
  }
  else {
    lose();
    return(0);
  }
}
if (answer == 2) {
  calculate();
  calculate();
  calculate();
  std::cout << "You and your friends...";
  
  if (random1 + random2 % 2 == 0) {
    std::cout << " leave safely and unscathed by the battle";
  }
  else {
    lose();
    return(0);
  }
}
}

