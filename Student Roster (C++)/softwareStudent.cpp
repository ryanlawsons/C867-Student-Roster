#include <iostream>
#include "softwareStudent.h"

using std::cout;

//Constructor
softwareStudent::softwareStudent()
{
	setDegreeProgram(SOFTWARE);
}

softwareStudent::softwareStudent(string studentID, string firstName, string lastName, string email, int age, int* daysInCourse, Degree  degreeProgram)
{
	setDegreeProgram(SOFTWARE);
}

Degree softwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}

void softwareStudent::setDegreeProgram(Degree SOFTWARE)
{
	this->program = SOFTWARE;
}

void softwareStudent::print()
{
	this->Student::print();
	cout << "SOFTWARE" << "\n";
}

softwareStudent::~softwareStudent()
{
	~Degree();
	delete this;
}