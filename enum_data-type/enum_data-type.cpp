// enum_data-type.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//output the value of members in enum data type
	enum colors {RED, GREEN, BLUE};
	colors b = BLUE, c = GREEN;
	cout<<"b= "<<b<<"\n";
	cout<<"c= "<<c<<"\n";

	//an example of how to use enum
	colors color = GREEN;
    	if (color == RED)
        	cout << "open red door";
    	else if (color == GREEN)
		cout << "open green door";
	else if (color == BLUE)
		cout << "open blue door";
	else cout<<"close door";
	system("pause");
}

