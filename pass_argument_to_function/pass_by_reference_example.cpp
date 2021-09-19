#include <iostream>
using namespace std;

void passByValue(int &x){
	x++;
}
int main()
{
	int a = 10;
	passByValue(a);//pass 'a' variable to function
	cout<<"Value of 'a' variable is changed, a = "<<a;
    system("pause");
}