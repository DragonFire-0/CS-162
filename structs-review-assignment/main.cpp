//*****************************************************************************
// Author: Chancellor Field
// Assignment: Structs REvieew
// Date: 4/3/25
// Description: 
// Sources: 
//*****************************************************************************

#include <iostream>
#include main.h

using namespace std;

int main() {
  cout << "Welcome!" << endl 
  << "This program will help you manage your activities" << endl;

//Main choice variable
char choiceChar = 'a';

//While not wanting to quit
while (choiceChar != 'q'){
  cout << "Pick an option from below:" << endl
  << "(a)Add a new activity" << endl
  << "(b)List activities by name" << endl
  << "(c)List activities by location" << endl
  << "(d)List activities by Type" << endl
  << "(e)Remove an activity" << endl
  << "(f)Search by activity name" << endl
  << "(q)Quit" << endl;

  cin >> choiceChar;

}
  return 0;
}
