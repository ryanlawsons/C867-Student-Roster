#pragma once
#include <string>
#include <iostream>
#include "degree.h"

using std::string;

//This class is an abstract class because it has virtual methods in it

class Student//This class represents a Student
{
public:
	const static int daysArraySize = 3;

protected://The attributes that the objects of the Student class will have
	string StudentID; 
	string FirstName;
	string LastName;
	string EmailAddress;
	int Age;//Students age of integer value
	int DaysInCourse[daysArraySize];//DaysInCourse as an array of size 3
	Degree DegreeProgram;//The enumerated value: Security, networking, or software.

public:
	Student();//Empty constructor
	Student(string StudentID, string FirstName, string LastName, string EmailAddress, 
		int Age, int DaysInCourse[], Degree DegreeProgram);//Full constructor

	//Getters aka Assesors
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDaysInCourse();
	virtual Degree getDegreeProgram() = 0; //Virtual

	//Setters aka mutators
	void setStudentId(string StudentID);
	void setFirstName(string FirstName);
	void setLastName(string LastName);
	void setEmailAddress(string EmailAddress);
	void setAge(int Age);
	void setDaysInCourse(int DaysInCourse[]);

	virtual void print() = 0;

	//Destructor
	~Student();
};