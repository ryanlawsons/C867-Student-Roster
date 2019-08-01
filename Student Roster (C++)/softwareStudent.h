#pragma once
#include <string>
#include "degree.h"
#include "student.h"

class softwareStudent : public Student {
public:
	softwareStudent();
	softwareStudent(string, string, string, string, int, int*, Degree);
	Degree getDegreeProgram();
	void setDegreeProgram(Degree Software);
	void print();

private:
	Degree program;

	//Destructor
	~softwareStudent();
};
