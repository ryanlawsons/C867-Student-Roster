#include <iostream>
#include <sstream>
#include "roster.h"

using std::cout;
using namespace std;

Roster::Roster()//Empty Constructor
{
	this->maxSize = 0;
	this->lastIndex = -1;
	this->students = nullptr;
}

Roster::Roster(int maxSize)
{
	this->maxSize = maxSize;
	this->lastIndex = -1;
	this->students = new Student * [maxSize];
}

Student* Roster::getStudentAt(int index)
{
	return students[index];
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree  degreeProgram)
{
	int courseDays[3];
	courseDays[0] = daysInCourse1;
	courseDays[1] = daysInCourse2;
	courseDays[2] = daysInCourse3;
	addIndex++;

	if (degreeProgram == NETWORK) {
		classRosterArray[addIndex] = new networkStudent(studentID, firstName, lastName, emailAddress, age, courseDays, degreeProgram);
	}
	else if (degreeProgram == SOFTWARE)
	{
		classRosterArray[addIndex] = new softwareStudent(studentID, firstName, lastName, emailAddress, age, courseDays, degreeProgram);
	}
	else
	{
		classRosterArray[addIndex] = new securityStudent(studentID, firstName, lastName, emailAddress, age, courseDays, degreeProgram);
	}
}

void Roster::printAll()
{
	for (int i = 0; i <= this->lastIndex; i++) (this->students)[i]->print();
}

void Roster::printByDegreeProgram(int degreeProgram)
{

}

void Roster::printDaysInCourse(string studentID)
{

}

void Roster::printInvalidEmails()
{

}

void Roster::remove(string studentID)
{

}

int main() {
	cout << "Scripting and Programming - Applications - C867 \n";//Prints course title
	cout << "C++ \n";//Prints programming language used
	cout << "001107996 \n";//Prints my student ID
	cout << "Ryan Lawson \n\n";//Prints my name

	Roster classRoster;//Creates an instance of the roster called classRoster

	const string studentData[] =
	{//Adding the student's information into the roster
		"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Ryan,Lawson,rlaws37@wgu.edu,36,22,30,35,SOFTWARE"
	};

	Degree degree;

	for (int i = 0; i < sizeof(studentData) / sizeof(studentData[i]); i++)
	{
		string input = studentData[i];
		istringstream ss(input);
		string token;
		string id, fname, lname, mail, temp;
		int age, d1, d2, d3;

		for (int i = 0; i < 9; i++)
		{
			getline(ss, token, ',');
			if (i == 0)
			{
				id = token;
			}
			if (i == 1)
			{
				fname = token;
			}
			if (i == 2)
			{
				lname = token;
			}
			if (i == 3)
			{
				mail = token;
			}
			if (i == 4)
			{
				age = stoi(token);
			}
			if (i == 5)
			{
				d1 = stoi(token);

			}
			if (i == 6)
			{
				d2 = stoi(token);
			}
			if (i == 7)
			{
				d3 = stoi(token);
			}
			if (i == 8)
			{
				if (token == "SECURITY")
				{
					degree = SECURITY;
				}
				else if (token == "NETWORK")
				{
					degree = NETWORK;
				}
				else if (token == "SOFTWARE")
				{
					degree = SOFTWARE;
				}
			}
		}
		classRoster.add(id, fname, lname, mail, age, d1, d2, d3, degree);
		cout << id << ' ' << fname << ' ' << lname << ' ' << mail << ' ' << age << ' ' << d1 << ' ' << d2 << ' ' << d3 << ' ' << degree << endl << endl;
	}
	classRoster.printAll();
}

Roster::~Roster()
{
}
