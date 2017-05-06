//
// Created by TKisely on 2017. 04. 24..
//

#include "Date.h"

Date::Date() {
}

Date::Date(const unsigned pYear, const unsigned pMonth, const unsigned pDay) {
    setYear(pYear);setMonth(pMonth);setDay(pDay);
}

string Date::printToString() const {
    return std::string();
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
    return std::string();
}

unsigned Date::getDay() const {
    return day;
}
