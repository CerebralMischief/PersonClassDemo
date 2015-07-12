//
// Created by Eric on 6/26/2015.
//

#include <iostream>
#include <pgtypes_date.h>

using namespace std;

#ifndef PERSONCLASSDEMO_PERSONCLASS_H
#define PERSONCLASSDEMO_PERSONCLASS_H

class Person {

public:
    string FirstName;
    string LastName;
    date DateOfBirth;

    string Name();

    int GetAge();
};

#endif //PERSONCLASSDEMO_PERSONCLASS_H
