﻿// Arithmetic_Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main() 
{
	int a = 9,b = 4, c;
	
	c = a+b;
	cout<<"a+b = "<< c <<endl;
	c = a-b;
	cout<<"a-b = "<< c <<endl;
	c = a*b;
	cout<<"a*b = "<< c <<endl;
	c = a/b;
	cout<<"a/b = "<< c <<endl;
	c = a%b;
	cout<<"Remainder when a divided by b = "<< c <<endl;
	system("pause");
}
