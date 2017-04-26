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
    Date when;
    Place where;
public:
    Base_Event();
    Base_Event(const Date&,const Place&);
};


#endif //UPDATEDLOGICEXAMCERT_BASE_EVENT_H
