// Fransiskus Agapa
// 9/6/22
// Practices make improvement - Have Fun !!!
// :)

// =================
// user learning and understanding how copy assignment works
// =================

#include <iostream>
#include "CopyAs.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << endl;
    double userInput;                                     // user-input digit
    // default constructor
    cout << "1st class object" << endl;
    CopyAs stObj;                                         // first class object

    // set and get value
    cout << "Input a number: ";
    cin >> userInput;
    cout << endl;
    stObj.SetValue(userInput);
    cout << stObj.GetValue() << endl;

    cout << endl;

    // copy constructor
    cout << "2nd class object" << endl;
    CopyAs ndOjb = stObj;                               // create second class - copy constructor called
    cout << ndOjb.GetValue() << endl;
    cout << endl << "Input another number to update 2nd class object's value: ";
    cin >> userInput;
    cout << endl;
    ndOjb.SetValue(userInput);
    cout << ndOjb.GetValue() << endl;

    // copy assignment
    cout << endl << "3rd class object" << endl;
    CopyAs rdObj;
    rdObj = ndOjb;                                     // copy assignment called
    cout << rdObj.GetValue() << endl;
    cout << endl << "Input another number to update 3rd class object's value: ";
    cin >> userInput;
    cout << endl;
    rdObj.SetValue(userInput);
    cout << rdObj.GetValue() << endl;

    return 0;
}
