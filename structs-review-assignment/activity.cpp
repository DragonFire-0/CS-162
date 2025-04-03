#include "activity.h"

char Activity::mainOptionPick(){
    char c = 'a';
    cout << "Pick an option from below:" << endl
    << "(a)Add a new activity" << endl
    << "(b)List activities by name" << endl
    << "(c)List activities by location" << endl
    << "(d)List activities by Type" << endl
    << "(e)Remove an activity" << endl
    << "(f)Search by activity name" << endl
    << "(q)Quit" << endl;

    cin >> c;

    return c;
};