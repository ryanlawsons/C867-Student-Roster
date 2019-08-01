#pragma once
#include <string>
#include "degree.h"
#include "student.h"


class securityStudent : public Student {//Creates a subclass of Student named securityStudent
public:
	securityStudent();
	securityStudent(string, string, string, string, int, int*, Degree);
	Degree getDegreeProgram();
	void setDegreeProgram(Degree Security);
	void print();

private:
	Degree degreeProgram;
	//Destructor
	~securityStudent();
};
