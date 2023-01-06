#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name) : courseName(name){
}

void GradeBook::SetCourseName(string name){
    courseName = name;
}

string GradeBook::GetCourseName() const{
    return courseName;
}

void GradeBook::DisplayMessage() const{
    cout << "Welcome to the grade book for " << GetCourseName() << "!" << endl;
}