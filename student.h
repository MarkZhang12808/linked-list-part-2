//Mark Zhang - 10 April 2021 - Linked List Part 2
//header file for the student class
//declares constructor, destructor, functions that return information
#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>
#include <iostream>
using namespace std;

class Student
{
private:
    char* firstN;
    char* lastN;
    int ID;
    float GPA;
public:
    Student(char* first, char* last, int idNum, float grade);
    ~Student();
    char* getFirst();
    char* getLast();
    int getID();
    float getGrade();
};

#endif