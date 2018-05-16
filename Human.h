/*
 * Human.h
 *
 *  Created on: May 15, 2018
 *      Author: Howard
 */

#ifndef HUMAN_H_
#define HUMAN_H_
#include<string>
using namespace std;
class Human
{
private:
	string name;
	int age;
	char sex;
	Human();
protected:
	Human(string n, int a,char s)
	{name=n; age=a;sex=s;}
public:
	//setters
	void setName(string n)
	{name=n;}
	void setAge(int);
	void setSex(char);
	//getters
	string getName() const
	{return name;}
	int getAge() const
	{return age;}
	char getSex() const
	{return sex;}

	virtual void work();

};




#endif /* HUMAN_H_ */
