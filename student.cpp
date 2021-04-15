//Mark Zhang - 10 April 2021 - Linked List Part 2
//cpp file for the student class
//contains constructor and destructor for the student class
//and has 4 functions that return information
#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

Student::Student(char* first, char* last, int idNum, float grade)
{
    firstN = first;
    lastN = last;
    ID = idNum;
    GPA = grade;
}

Student::~Student()
{
   delete firstN, lastN, ID, GPA;
}

char* Student::getFirst()
{   
    return firstN;
}

char* Student::getLast()
{
    return lastN;
}

int Student::getID()
{
    return ID;
}

float Student::getGrade()
{
    return GPA;
}


