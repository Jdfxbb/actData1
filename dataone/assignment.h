#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <stdio.h>
#include <iostream>
#include <list>
#include "date.h"

using namespace std;

class assignment{
	
public:
	assignment();
	Date dueDate;
	string description;
	Date assignedDate;

	enum status{assigned = 1, completed = 2, late = 3};
	
	friend istream &operator>>(istream& in, assignment current);
	friend istream &operator<<(ostream& out, assignment current);
};

#endif