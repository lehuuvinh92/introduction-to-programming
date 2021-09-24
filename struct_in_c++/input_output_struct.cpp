#include <iostream>
using namespace std;

struct POINT
{
	int x;
	int y;
};

int main() {
	POINT d1 = {19, 20};
	POINT d2, d3;
	d2 = d1;
	d3.x = 99;
	d3.y = 101;
	cout<<"Coordinates of point d1 is ("<<d1.x<<", "<<d1.y<<")"<<endl;
	cout<<"Coordinates of point d2 is ("<<d2.x<<", "<<d2.y<<")"<<endl;
	cout<<"Coordinates of point d3 is ("<<d3.x<<", "<<d3.y<<")"<<endl;
	system("pause");
}