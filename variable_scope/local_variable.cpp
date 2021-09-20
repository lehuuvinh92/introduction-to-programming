#include <iostream>
using namespace std;

void test()
{
	// local variable to test()
	int var1;
	var1 = 6;

	// illegal: var not declared inside test()
	cout << var;
}

int main() 
{
	// local variable to main()
	int var = 5;

	test();
    
	// illegal: var1 not declared inside main()
	var1 = 9;
}