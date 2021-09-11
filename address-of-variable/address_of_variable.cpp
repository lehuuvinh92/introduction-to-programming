// address_of_variable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main() 
{
	int a;
	float b;
	cout << "Address of a: " << &a << endl;
	cout << "Address of b: " << &b << endl;
	system("pause");
}
