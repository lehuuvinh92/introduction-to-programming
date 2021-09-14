// Logical_Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main() 
{
	int a = 5, b = 5, c = 10, result;
	
	result = (a == b) && (c > b);
	cout<<"(a == b) && (c > b) is "<<result<<endl;

	result = (a == b) && (c < b);
	cout<<"(a == b) && (c < b) is "<<result<<endl;

	result = (a == b) || (c < b);
	cout<<"(a == b) || (c < b) is "<<result<<endl;

	result = (a != b) || (c < b);
	cout<<"(a != b) || (c < b) is "<<result<<endl;

	result = !(a != b);
	cout<<"!(a != b) is "<<result<<endl;

	result = !(a == b);
	cout<<"!(a == b) is "<<result<<endl;
	system("pause");
}
