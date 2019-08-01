#pragma once
#include <string>
#include "degree.h"
#include "student.h"

class networkStudent : public Student //Creates a subclass of Student named networkStudent
{
public:
	networkStudent();
	networkStudent(string StudentID, string FirstName, string LastName, 
		string EmailAddress, int Age, int* DaysInCourse, Degree DegreeProgram);
	Degree getDegreeProgram();
	void setDegreeProgram(Degree Network);
	void print();

private:
	Degree program;
	//Destructor
	~networkStudent();
};
