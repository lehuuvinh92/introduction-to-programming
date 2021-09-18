#include <iostream>
using namespace std;

// declaring a function
int add(int a, int b) {
	return (a + b);
}

int main() {
	int a;
	int b;
	cout<<"Input a:";
	cin>>a;
	cout<<"Input b:";
	cin>>b;
	int sum;
    
	// calling the function and storing
	// the returned value in sum
	sum = add(a, b);

	cout << "Sum of "<<a<<" and "<<b<<" = " << sum << endl;

    system("pause");
}