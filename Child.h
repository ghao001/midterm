/*
 * Child.h
 *
 *  Created on: May 15, 2018
 *      Author: Howard
 */

#ifndef CHILD_H_
#define CHILD_H_
#include"Parent.h"
class Child:Parent
{
private:
	Parent Mom;
	Parent Dad;
public:
	Child(Parent *m, Parent *d)
	{&Mom=m,&Dad=d;}
};




#endif /* CHILD_H_ */
