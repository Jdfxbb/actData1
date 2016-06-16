//
//  assignment.cpp
//  
//
//  Created by John Goza on 6/15/16.
//
//

#include <stdio.h>
#include "assignment.h"


assignment::assignment(){

}


istream &operator>>(istream& in, assignment current){
	in >> current.dueDate >> current.description >> current.assignedDate >> current.completed;
	return in;
}

/*
assignment();
Date dueDate;
string description;
Date assignedDate;
enum status{assigned = 1, completed = 2, late = 3};

friend istream &operator>>(istream& in, assignment current);
friend istream &operator<<(ostream& out, assignment current);
};
*/

