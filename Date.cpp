//
// Created by TKisely on 2017. 04. 24..
//

#include "Date.h"

Date::Date() {

}
Date::Date(const unsigned pYear, const unsigned pMonth, const unsigned pDay) {
    setYear(pYear);setMonth(pMonth);setDay(pDay);
}

bool Date::setYear(const unsigned pYear) {
    if(pYear>=1900){
        this->year=pYear;
        return true;
    }
    return false;
}

bool Date::setMonth(const unsigned pMonth) {
    if(pMonth>=1&&pMonth<=12){
        this->month=pMonth;
        return true;
    }
    return false;
}

bool Date::setDay(const unsigned pDay) {
    if(pDay>=1&&pDay<=31){
        this->day=pDay;
        return true;
    }
    return false;
}

unsigned Date::getYear() const {
    return year;
}

unsigned Date::getMonth() const {
    return month;
}

string Date::getMonthName() const {
    string ret;
    switch(getMonth()){
        case 1:ret="January";break;
        case 2:ret="February";break;
        case 3:ret="March";break;
        case 4:ret="April";break;
        case 5:ret="May";break;
        case 6:ret="June";break;
        case 7:ret="July";break;
        case 8:ret="August";break;
        case 9:ret="September";break;
        case 10:ret="October";break;
        case 11:ret="November";break;
        case 12:ret="December";break;
        default:ret="defaultMonth";break;
    }
    return ret;
}

unsigned Date::getDay() const {
    return day;
}

string Date::printToString() const {
    string ret;
    ret+=std::to_string(getYear());
    ret+=".";
    ret+=getMonthName();
    ret+=".";
    ret+=std::to_string(getDay());
    ret+=".";
    ret+="\n";
    return ret;
}

bool Date::printToConsole() const {
    std::cout<<printToString();
    return true;
}
