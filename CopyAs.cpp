// Fransiskus Agapa
// Declare a class CopyAs

#include "CopyAs.h"
#include <iostream>

using std::cout;
using std::endl;

// default constructor
CopyAs::CopyAs()
{
    cout << "= Default constructor called =" << endl;
    _data = new double;                           // allocate new memory
    *_data = 0;                                   // default value
}

// set value
void CopyAs::SetValue(const double& theData)
{
    cout << "= Set value called =" << endl;
    _data = new double;                           // allocate new memory
    *_data = theData;                             // assign value to a given data
}

// get value
double CopyAs::GetValue() const
{
    cout << "= Get value called =" << endl;
    return *_data;
}

// copy constructor
CopyAs::CopyAs(const CopyAs& theData)
{
    cout << "= Copy constructor called =" << endl;
    _data = new double;
    *_data = *theData._data;
}

// copy assignment
CopyAs& CopyAs::operator=(const CopyAs& theData)
{
    cout << "= Copy assignment called =" << endl;
    if(this != &theData)                       // no self-assign
    {
        delete _data;                          // free old-allocated memory
        _data = new double;                    // allocate new memory
        *_data = *theData._data;
    }
    return *this;                              // return pointer to class object
}

// destructor
CopyAs::~CopyAs()
{
    cout << "= Destructor called =" << endl;
    delete _data;
}