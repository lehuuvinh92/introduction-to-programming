#include <iostream>
using namespace std;

struct POINT
{
	int x;
	int y;
};
struct TRIANGLE
{
	POINT p_array[3];
};

int main() {
	TRIANGLE t1;
	cout<<"Input 3 points of triangle t1:";
	for(int i=0;i<3;i++){
		cout<<endl<<"Input point "<<i+1<<endl;
		cout<<"x:";
		cin>>t1.p_array[i].x;
		cout<<"y:";
		cin>>t1.p_array[i].y;
	}

	cout<<"Coordinates of 3 points in triangle t1:"<<endl;
	cout<<"("<<t1.p_array[0].x<<", "<<t1.p_array[0].y<<")"<<endl;
	cout<<"("<<t1.p_array[1].x<<", "<<t1.p_array[1].y<<")"<<endl;
	cout<<"("<<t1.p_array[2].x<<", "<<t1.p_array[2].y<<")"<<endl;
	system("pause");
}