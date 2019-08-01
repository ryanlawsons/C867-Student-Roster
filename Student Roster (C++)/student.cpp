#include<iostream>
#include<iomanip>
#include "student.h"

using std::cout;
using std::left;
using std::setw;

Student::Student()//Empty constructor will set all to default values
{
	this->StudentID = "";
	this->FirstName = "";
	this->LastName = "";
	this->EmailAddress = "";
	this->Age = 0;
	for (int i = 0; i < daysArraySize; i++) this->DaysInCourse[i] = 0;
}

//Constructor
Student::Student(string studentID, string firstName, string lastName, 
	string emailAddress, int age, int daysInCourse[], Degree degreeProgram)
{
	this->StudentID = studentID;
	this->FirstName = firstName;
	this->LastName = lastName;
	this->EmailAddress = emailAddress;
	this->Age = age;
	for (int i = 0; i < daysArraySize; i++) this->DaysInCourse[i] = 0;
	this->DegreeProgram = degreeProgram;
}

//Accessors aka getters
string Student::getStudentID()
{
	return StudentID;
}

string Student::getFirstName()
{
	return FirstName;
}

string Student::getLastName()
{
	return LastName;
}

string Student::getEmailAddress()
{
	return EmailAddress;
}

int Student::getAge()
{
	return Age;
}

int* Student::getDaysInCourse()
{
	return DaysInCourse;
}

Degree Student::getDegreeProgram()
{
	return Degree();
}

//Mutators aka setters
void Student::setStudentId(string studentID)
{
	this->StudentID = studentID;
}

void Student::setFirstName(string firstName)
{
	this->FirstName = firstName;
}

void Student::setLastName(string lastName)
{
	this->LastName = lastName;
}

void Student::setEmailAddress(string emailAddress)
{
	this->EmailAddress = emailAddress;
}

void Student::setAge(int age)
{
	this->Age = age;
}

void Student::setDaysInCourse(int daysInCourse[])
{
	for (int i = 0; i < 3; i++) {
		daysInCourse[i] = daysInCourse[i];
	}
}

void Student::print()
{
	string degree;
	if (getDegreeProgram() == 0)
	{
		degree = "Security";
	}
	else if (getDegreeProgram() == 1)
	{
		degree = "Network";
	}
	if (getDegreeProgram() == 2)
	{
		degree = "Software";
	}
	
	cout << left << setw(5) << StudentID;
	cout << left << setw(20) << FirstName;
	cout << left << setw(20) << LastName;
	cout << left << setw(20) << EmailAddress;
	cout << left << setw(5) << Age;
	cout << left << setw(10) << DaysInCourse[0];
	cout << left << setw(10) << DaysInCourse[1];
	cout << left << setw(10) << DaysInCourse[2];
	cout << left << setw(10) << degree;
}

//Destructor
Student::~Student()
{
}
