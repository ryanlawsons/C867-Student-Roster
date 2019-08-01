#pragma once
#include <string>

enum Degree {SECURITY, NETWORK, SOFTWARE};//This enumerates the 3 Subclasses (0, 1, and 2)

//The following code creates an array of strings that label the enumerated values
static const std::string degreeStrings[] = {"SECURITY","NETWORK","SOFTWARE"};