// cin_cout_command.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main() 
{ 
	char ten[50];
	cout << "Input your name: ";
	cin >> ten;
	cout << "Your name is: " << ten << endl;

	int a, b;
	cout<<"Input value of a:";
	cin>>a;
	cout<<"Value of a = "<< a <<endl;
	cout<<"Input value of b:";
	cin>>b;
	cout<<"Value of b = "<< b <<endl;
	/* You can input a and b with one line
	cin>>a>>b; */
	system("pause");
}
