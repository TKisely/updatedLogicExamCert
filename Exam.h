//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_EXAM_H
#define UPDATEDLOGICEXAMCERT_EXAM_H


#include "IPrintable.h"
#include "Award.h"
#include "Mark.h"

class Exam: IPrintable {
private:
    Mark* marks;
    Award* awards;
public:
    Exam(const Student&);

    void addMark();
    void addAward();

    bool deleteLastMark();
    bool deleteLastAward();

};


#endif //UPDATEDLOGICEXAMCERT_EXAM_H
