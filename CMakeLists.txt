cmake_minimum_required(VERSION 3.7)
project(updatedLogicExamCert)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Base_Event.cpp Base_Event.h Date.cpp Date.h Place.cpp Place.h Exam_Event.cpp Exam_Event.h Exam.cpp Exam.h Mark.cpp Mark.h Award.cpp Award.h Person.cpp Person.h IPrintable.h Printer.cpp Printer.h Student.cpp Student.h Teacher.cpp Teacher.h)
add_executable(updatedLogicExamCert ${SOURCE_FILES})