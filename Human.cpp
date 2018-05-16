#include"Human.h"
#include<iostream>
using namespace std;

void Human::setAge(int n)
{
	if(n>=0)
		age=n;
	else cout<<"invalid input"<<endl;
}

void Human::setSex(char s)
{
	if(s=='F'||s=='M')
		sex=s;
	else cout<<"invalid input(F/M)"<<endl;
}
