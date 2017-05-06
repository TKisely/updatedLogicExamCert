//
// Created by TKisely on 2017. 04. 24..
//

#include "Base_Event.h"

Base_Event::Base_Event() {

}

Base_Event::Base_Event(const Base_Event &other):dateOfEvent(other.When()),placeOfEvent(other.Where()) {
}

Base_Event::Base_Event(const Date &pDate, const Place &pPlace)
        :dateOfEvent(pDate),placeOfEvent(pPlace) {
}

Date Base_Event::When() const {
    return dateOfEvent;
}

Place Base_Event::Where() const {
    return placeOfEvent;
}

bool Base_Event::setDate(const Date &pDate) {
    this->dateOfEvent=pDate;
    return true;
}

bool Base_Event::setPlace(const Place &pPlace) {
    this->placeOfEvent=pPlace;
    return true;
}

