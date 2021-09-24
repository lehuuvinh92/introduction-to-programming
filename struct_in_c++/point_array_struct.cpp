#include <iostream>
#include <string>
using namespace std;

struct POINT
{
	int x;
	int y;
};

int main() {
	POINT point_array[100];
	int n;//number of points stored
	cout<<"Input number of points to store:";
	cin>>n;
	cout<<"Input "<<n<<" points"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Input "<<i+1<<"th point:";
		cout<<endl<<"x:";cin>>point_array[i].x;
		cout<<"y:";cin>>point_array[i].y;
	}
	cout<<"Output "<<n<<" points"<<endl;
	for(int i=0;i<n;i++){
		cout<<i+1<<"th point:("<<point_array[i].x<<", "<<point_array[i].y<<")"<<endl;
	}
	system("pause");
}