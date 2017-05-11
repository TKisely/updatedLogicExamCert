//
// Created by TKisely on 2017. 04. 24..
//

#include "Place.h"

Place::Place() {
}

Place::Place(const unsigned & pZip, const string &pCity, const string &pStreet, const unsigned &pHouseNum) {
    setCity(pCity);
    setHouseNum(pHouseNum);
    setStreet(pStreet);
    setZip(pZip);
}

Place::Place(const Place &other){
    setZip(other.getZip());
    setCity(other.getCity());
    setStreet(other.getStreet());
    setHouseNum(other.getHouseNum());
}

string Place::printToString()const {
    string ret;
    ret+="Zip code : ";
    ret+=std::to_string(getZip());
    ret+="\nCity : ";
    ret+=getCity();
    ret+="\nAddress line : ";
    ret+=getStreet();
    ret+=' ';
    ret+=to_string(getHouseNum());
    return ret;
}

bool Place::printToConsole()const {
    cout<<printToString()<<'\n';
    return true;
}

bool Place::setZip(const unsigned &pZip) {
    if(pZip>=10000 || pZip<=1000) return false;
    else
        this->zipCode=pZip;
    return true;
}

bool Place::setCity(const string &pCity) {
    this->city=pCity;
    return true;
}

bool Place::setStreet(const string &pStreet) {
    this->street=pStreet;
    return true;
}

bool Place::setHouseNum(const unsigned &pHouseNum) {
    this->houseNum=pHouseNum;
}

unsigned Place::getZip() const {
    return zipCode;
}

string Place::getCity() const {
    return city;
}

string Place::getStreet() const {
    return street;
}

unsigned Place::getHouseNum() const {
    return houseNum;
}


