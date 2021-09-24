#include <iostream>
using namespace std;

struct POINT
{
	int x;
	int y;
};

struct TRIANGLE
{
	POINT p1;
	POINT p2;
	POINT p3;
};

struct STUDENT
{
	string id;
	string name;
	string birthday;
	bool gender;
	float math, physics, chemistry;
};

int main() {
	cout << "Size of POINT is: " << sizeof(POINT) <<" byte"<< endl;
	cout << "Size of TRIANGLE is: " << sizeof(TRIANGLE) <<" byte"<< endl;
	cout << "Size of STUDENT is: " << sizeof(STUDENT) <<" byte"<< endl;
	system("pause");
}