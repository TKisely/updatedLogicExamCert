//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_MARK_H
#define UPDATEDLOGICEXAMCERT_MARK_H

#include <string>
#include "IPrintable.h"

using namespace std;

class Mark: public IPrintable {
private:
    string subject;
    unsigned num;
};


#endif //UPDATEDLOGICEXAMCERT_MARK_H
