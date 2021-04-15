#pragma once

#include "student.h"

class Node{
	private:
		Student* student;
		Node* next;
	public:
		//Constructor
		Node(Student* _student);
		//Getters
		Node* getNext();
		Student* getStudent();
		//Setters
		void setNext(Node* node);
		void setStudent(Student* _student);
		//Destructor
		~Node();
};