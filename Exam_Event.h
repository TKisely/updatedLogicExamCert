//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_EXAM_EVENT_H
#define UPDATEDLOGICEXAMCERT_EXAM_EVENT_H


#include "Base_Event.h"
#include "Exam.h"

class Exam_Event: Base_Event {
private:
    Exam* exams;
public:
    virtual ~Exam_Event();
    Exam_Event(Exam *exams);
};


#endif //UPDATEDLOGICEXAMCERT_EXAM_EVENT_H