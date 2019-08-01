#pragma once
#include "degree.h"
#include "student.h"
#include <array>
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

class Roster {//Creates a class of objects called Roster
public:
	Roster();
	Roster(int maxSize);

	Student* getStudentAt(int index);
	void printAll();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree  degreeProgram);
	void remove(string studentID);
	void printByDegreeProgram(int degreeProgram);
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	int addIndex = -1;

	~Roster();

private:
	int lastIndex;
	int maxSize;
	Student** students;

	//Declares an array of pointers
	Student* classRosterArray[5];
};