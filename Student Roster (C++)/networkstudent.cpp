#include <iostream>
#include "networkStudent.h"

using std::cout;

//Constructor
networkStudent::networkStudent()
{
	setDegreeProgram(NETWORK);
}

networkStudent::networkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, Degree  degreeProgram)
{
	setDegreeProgram(NETWORK);
}

Degree networkStudent::getDegreeProgram()
{
	return NETWORK;
}

void networkStudent::setDegreeProgram(Degree NETWORK)
{
	this->program = NETWORK;
}

void networkStudent::print()
{
	this->Student::print();
	cout << "NETWORK" << "\n";
}

networkStudent::~networkStudent()
{
	~Degree();
	delete this;
}