//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_PLACE_H
#define UPDATEDLOGICEXAMCERT_PLACE_H


#include <string>
#include "IPrintable.h"

using namespace std;

class Place:IPrintable {
private:
    unsigned zipCode;
    string city;
    string street;
    unsigned houseNum;
public:

    Place();
    Place(const unsigned&,const string&,const string&,const unsigned&);
    string toString()const ;
    void printOut()const;

    bool setZip(const unsigned&);
    bool setCity(const string&);
    bool setStreet(const string&);
    bool setHouseNum(const unsigned&);

    unsigned getZip()const;
    string getCity()const;
    string getStreet()const;
    unsigned getHouseNum()const;
};

#endif //UPDATEDLOGICEXAMCERT_PLACE_H
