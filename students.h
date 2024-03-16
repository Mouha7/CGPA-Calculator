#ifndef STUDENTS_H
#define STUDENTS_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
    private:
        string name;
        string classStudent;
        int nombreNote;
        double * notes;
        int * coefficient;
    public:
        Student();
        void displayStudent();
};

#endif