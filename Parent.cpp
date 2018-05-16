/*
 * Parent.cpp
 *
 *  Created on: May 15, 2018
 *      Author: Howard
 */
#include"Parent.h"
#include<vector>
using namespace std;
class Child;
void Parent::setChild(Child &newChild)
{
	children.push_back(newChild);
}
vector<Child> * Parent::getChild()
{
	return &children;
}

