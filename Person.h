//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_PERSON_H
#define UPDATEDLOGICEXAMCERT_PERSON_H


#include <string>
#include "Date.h"

using namespace std;


class Person:public IPrintable {
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


    Person(const Person&);

    string getFirstName() const;

    string getLastName() const;

    Date getBirthDate() const;

    unsigned getID() const;

    string printToString()const;
    bool printToFile()const;
    bool printToConsole()const;
};




#endif //UPDATEDLOGICEXAMCERT_PERSON_H
