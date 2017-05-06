//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_BASE_EVENT_H
#define UPDATEDLOGICEXAMCERT_BASE_EVENT_H


#include "Date.h"
#include "Place.h"

class Base_Event {
private:
protected:
    Date dateOfEvent;
    Place placeOfEvent;
public:
    Base_Event();
    Base_Event(const Date&,const Place&);

    Date When()const;
    Place Where()const;

    bool setDate(const Date&);
    bool setPlace(const Place&);
};


#endif //UPDATEDLOGICEXAMCERT_BASE_EVENT_H
