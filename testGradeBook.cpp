// Compile with "g++ GradeBook.cpp testGradeBook.cpp"

#include <iostream>
#include "GradeBook.h"
using namespace std;

int main(){
    GradeBook gb1("CS101 Intro to C++ Programming");
    GradeBook gb2("CS102 Data Structures in C++");

    cout << "Grade book 1 created for course: " << gb1.GetCourseName() 
        << "\nGrade book 2 created for course: " << gb2.GetCourseName() << endl;
}