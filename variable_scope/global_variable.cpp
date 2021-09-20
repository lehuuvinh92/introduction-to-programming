#include <iostream>
using namespace std;

// Global variable declaration
int c = 12;

void test()
{
	++c;

	// Outputs 14
	cout << c;
}

int main()
{
	++c;

	// Outputs 13
	cout << c <<endl;
	test();

    system("pause");
}