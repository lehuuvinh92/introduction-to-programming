// Assignment_Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main() 
{
	int a = 5, c;
	c = a; // c is 5
	cout<<"c = "<<c<<endl;
	c += a; // c is 10 
	cout<<"c = "<<c<<endl;
	c -= a; // c is 5
	cout<<"c = "<<c<<endl;
	c *= a; // c is 25
	cout<<"c = "<<c<<endl;
	c /= a; // c is 5
	cout<<"c = "<<c<<endl;
	c %= a; // c = 0
	cout<<"c = "<<c<<endl;
	system("pause");
}
