#include <iostream>
using namespace std;

struct POINT {
    int x;
	int y;
};

int main() {
	//declare a struct POINT pointer
	POINT* ptr;

	//dynamically allocate memory
	ptr = new POINT;

	//input POINT
	cout<<"Input point"<<endl;
	cout<<"input x:";cin>>ptr->x;
	cout<<"input y:";cin>>ptr->y;

	//output POINT
	cout<<"Output point:("<<ptr->x<<", "<<ptr->y<<")"<<endl;

	// ptr memory is released
	delete ptr;
	ptr = NULL;

	system("pause");
}