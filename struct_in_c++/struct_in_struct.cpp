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

int main() {
	POINT d1 = {-1, 0};
	POINT d2 = {0, 2};
	POINT d3 = {2, 0};
	
	TRIANGLE t1;
	t1.p1 = d1;
	t1.p2 = d2;
	t1.p3 = d3;

	cout<<"Coordinates of 3 points in triangle t1:"<<endl;
	cout<<"("<<t1.p1.x<<", "<<t1.p1.y<<")"<<endl;
	cout<<"("<<t1.p2.x<<", "<<t1.p2.y<<")"<<endl;
	cout<<"("<<t1.p3.x<<", "<<t1.p3.y<<")"<<endl;
	system("pause");
}