// Created by Eric on 6/26/2015.
//
#include <iostream>
#include <chrono>
#include "Person.h"

using namespace std;

string Person::Name() {
    return FirstName + " " + LastName;
}

int Person::GetAge() {
    std::chrono::time_point<std::chrono::system_clock> current;
    current = std::chrono::system_clock::now();

    return 10;
}