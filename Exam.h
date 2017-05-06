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
    Student s;
    Mark* marks;
    Award* awards;
    unsigned nMarks;
    unsigned nAwards;
public:
    Exam(const Student&);

    void addMark(const string&,unsigned);
    void addMark(const Mark&);
    void addAward(const Award&);

    bool deleteLastMark();
    bool deleteLastAward();

    Student whose()const;

    string printToString()const;
    bool printToFile()const;
    bool printToConsole()const;
};


#endif //UPDATEDLOGICEXAMCERT_EXAM_H
