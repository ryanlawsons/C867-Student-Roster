#include <iostream>
#include "securityStudent.h"

using std::cout;

//Constructor
securityStudent::securityStudent()
{
	setDegreeProgram(SECURITY);
}

securityStudent::securityStudent(string studentID, string firstName, string lastName, string email, int age, int* daysInCourse, Degree  degreeProgram)
{
	setDegreeProgram(SECURITY);
}

Degree securityStudent::getDegreeProgram()
{
	return SECURITY;
}

void securityStudent::setDegreeProgram(Degree NETWORKING)
{
	this->degreeProgram = SECURITY;
}

void securityStudent::print()
{
	this->Student::print();
	cout << "SECURITY" << "\n";
}

securityStudent::~securityStudent()
{
	~Degree();
	delete this;
}