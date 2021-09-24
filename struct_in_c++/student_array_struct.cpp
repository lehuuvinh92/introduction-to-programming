#include <iostream>
#include <string>
using namespace std;

struct STUDENT
{
	string id;
	string name;
	string birthday;
	bool gender;//0:female, 1:male
	float math, physics, chemistry;
};


int main() {
	STUDENT student_array[100];
	int n;//number of students stored
	cout<<"Input number of students to store:";
	cin>>n;
	cout<<"Input "<<n<<" students"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Input "<<i+1<<"th student:";
		cin.ignore(100,'\n');
		cout<<endl<<"id:";
		getline(cin, student_array[i].id);
		cout<<"name:";
		getline(cin, student_array[i].name);
		cout<<"birthday:";
		getline(cin, student_array[i].birthday);
		cout<<"gender:";cin>>student_array[i].gender;
		cout<<"math:";cin>>student_array[i].math;
		cout<<"physics:";cin>>student_array[i].physics;
		cout<<"chemistry:";cin>>student_array[i].chemistry;
	}
	cout<<endl<<"===================================="<<endl;
	cout<<"Output "<<n<<" students"<<endl;
	for(int i=0;i<n;i++){
		cout<<i+1<<"th student"<<endl;
		cout<<"id:"<<student_array[i].id<<endl;
		cout<<"name:"<<student_array[i].name<<endl;
		cout<<"birthday:"<<student_array[i].birthday<<endl;
		cout<<"gender:"<<student_array[i].gender<<endl;
		cout<<"math:"<<student_array[i].math<<endl;
		cout<<"physics:"<<student_array[i].physics<<endl;
		cout<<"chemistry:"<<student_array[i].chemistry<<endl<<endl;
	}
	system("pause");
}