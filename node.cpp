#include "node.h"
#include "student.h"

//Constructor
Node::Node(Student* _student){
	student = _student;
	next = NULL;
}
//Get the next node in the linked list
//NULL if bottom of list
Node* Node::getNext(){
	return next;
}

//Get the student associated with this node
Student* Node::getStudent(){
	return student;
}

//Set the next node in the list
void Node::setNext(Node* node){
	Node::next = node;
}

//Set the student associated with this node
void Node::setStudent(Student* _student){
	Node::student = _student;
}

//Free the memory allocated to the student
Node::~Node(){
	delete student;
}