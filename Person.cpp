//
// Created by TKisely on 2017. 04. 24..
//

#include "Person.h"

unsigned Person::lastID=0; //ID will start from 1

Person::Person():ID(lastID++) {

}

Person::Person(const string &pFirstName, const string &pLastName, const Date &pDateOfBirth)
        :firstName(pFirstName),lastName(pLastName),birthDate(pDateOfBirth),ID(lastID++) {
}

Person::Person(const Person &other)
        :firstName(other.firstName),lastName(other.lastName),birthDate(other.birthDate),ID(other.ID) {
}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

Date Person::getBirthDate() const {
    return birthDate;
}

unsigned int Person::getID() const {
    return ID;
}

string Person::printToString() const {
    string ret="Name : ";
    ret+=getFirstName();
    ret+=' ';
    ret+=getLastName();
    ret+='\n';
    ret+="Date of Birth : ";
    ret+=getBirthDate().printToString();
    return ret;
}

bool Person::printToConsole() const {
    cout<<printToString()<<'\n';
    return false;
}


