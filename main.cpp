#include <iostream>
#include "Person.h"

using namespace std;

int main() {

    Person *person1;
    person1 = new Person();

    person1->FirstName = "Eric";
    person1->LastName = "Brown";

    cout << "Hello " + person1->Name() << endl;

    return 0;
}