// Relational_Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main() 
{
	int a = 5, b = 5, c = 10;
	
	cout<<a<<" == "<<b<<" is "<<(a == b)<<endl;
	cout<<a<<" == "<<c<<" is "<<(a == c)<<endl;
	cout<<a<<" > "<<b<<" is "<<(a > b)<<endl;
	cout<<a<<" > "<<c<<" is "<<(a > c)<<endl;
	cout<<a<<" < "<<b<<" is "<<(a < b)<<endl;
	cout<<a<<" < "<<c<<" is "<<(a < c)<<endl;
	cout<<a<<" != "<<b<<" is "<<(a != b)<<endl;
	cout<<a<<" != "<<c<<" is "<<(a != c)<<endl;
	cout<<a<<" >= "<<b<<" is "<<(a >= b)<<endl;
	cout<<a<<" >= "<<c<<" is "<<(a >= c)<<endl;
	cout<<a<<" <= "<<b<<" is "<<(a <= b)<<endl;
	cout<<a<<" <= "<<c<<" is "<<(a <= c)<<endl;
	system("pause");
}
