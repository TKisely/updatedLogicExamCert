//
// Created by TKisely on 2017. 04. 24..
//

#include "Person.h"

Person::Person() {

}

Person::Person(const string &, const string &, const Date &) {

}

string Person::getFirstName() const {
    return std::string();
}

string Person::getLastName() const {
    return std::string();
}

Date Person::getBirthDate() const {
    return Date();
}

unsigned int Person::getID() const {
    return 0;
}
