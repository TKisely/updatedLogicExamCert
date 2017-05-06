//
// Created by TKisely on 2017. 04. 24..
//

#include "Person.h"

Person::Person() {

}

Person::Person(const string &, const string &, const Date &) {

}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

Date Person::getBirthDate() const {
    return Date();
}

unsigned int Person::getID() const {
    return ID;
}
