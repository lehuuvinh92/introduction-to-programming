// Increment__Decrement_Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main()
{
	int a = 10, b = 100;
	cout<<"++a = "<<++a<<endl;
	cout<<"a++ = "<<a++<<endl;
	cout<<"--b = "<<--b<<endl;
	cout<<"b-- = "<<b--<<endl;
	cout<<"-----------------"<<endl;
	int x = 10;
	int y;
	y = ++x;//x = 11 and y = 11
	cout<<"y = ++x = "<<y<<endl;
	x = 10;//assign x=10
	y = x++;//y = 10 and x = 11
	cout<<"y = x++ = "<<y<<endl;
	system("pause");
}
