//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_PERSON_H
#define UPDATEDLOGICEXAMCERT_PERSON_H


#include <string>
#include "Date.h"

using namespace std;


class Person {
private:

protected:
    string firstName;
    string lastName;
    Date birthDate;
    unsigned ID;
    static unsigned lastID;
public:
    Person();

    Person(const string &, const string &, const Date &);

    string getFirstName() const;

    string getLastName() const;

    Date getBirthDate() const;

    unsigned getID() const;
};




#endif //UPDATEDLOGICEXAMCERT_PERSON_H
