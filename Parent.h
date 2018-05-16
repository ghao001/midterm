/*
 * Parent.h
 *
 *  Created on: May 15, 2018
 *      Author: Howard
 */

#ifndef PARENT_H_
#define PARENT_H_
#include "Human.h"
#include<vector>
class Child;
using namespace std;
class Parent:public Human
{
private:
	vector<Child>children;
public:
	void setChild(Child &);
	vector<Child> *getChild();
};




#endif /* PARENT_H_ */
