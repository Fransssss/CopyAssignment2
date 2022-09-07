// Fransiskus Agapa
// Define class CopyAs

#ifndef COPYASSIGNMENT2_COPYAS_H
#define COPYASSIGNMENT2_COPYAS_H

class CopyAs
{
private:
    double* _data;
public:
    CopyAs();                                      // default constructor
    void SetValue(const double& theData);          // set value
    double GetValue() const;                       // get value
    CopyAs(const CopyAs& theData);                 // copy constructor
    CopyAs& operator=(const CopyAs& theData);      // copy assignment
    ~CopyAs();                                     // destructor

};

#endif //COPYASSIGNMENT2_COPYAS_H
