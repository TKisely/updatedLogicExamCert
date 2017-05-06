//
// Created by TKisely on 2017. 04. 24..
//

#include "Base_Event.h"

Base_Event::Base_Event() {

}

Base_Event::Base_Event(const Date &, const Place &) {

}

Date Base_Event::When() const {
    return dateOfEvent;
}

Place Base_Event::Where() const {
    return placeOfEvent;
}

bool Base_Event::setDate(const Date &) {
    return false;
}

bool Base_Event::setPlace(const Place &) {
    return false;
}
