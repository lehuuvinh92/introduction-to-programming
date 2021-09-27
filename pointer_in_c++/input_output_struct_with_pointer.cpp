#include <iostream>
#include <string>
using namespace std;

struct STUDENT
{
	string id;
	string name;
	string birthday;
	bool gender;
	float math, physics, chemistry;
};

int main() {
	STUDENT sv1;
	STUDENT *psv;
	psv = &sv1;

	cout<<"input student"<<endl;
	cout<<"id:";getline(cin, psv->id);
	cout<<"name:";getline(cin, psv->name);
	cout<<"birthday:";getline(cin, psv->birthday);
	cout<<"gender:";cin>>psv->gender;
	cout<<"math:";cin>>psv->math;
	cout<<"physics:";cin>>psv->physics;
	cout<<"chemistry:";cin>>psv->chemistry;

	cout<<endl<<"output student"<<endl;
	cout<<"id:"<<(*psv).id<<endl;
	cout<<"name:"<<(*psv).name<<endl;
	cout<<"birthday:"<<(*psv).birthday<<endl;
	cout<<"gender:"<<(*psv).gender<<endl;
	cout<<"math:"<<(*psv).math<<endl;
	cout<<"physics:"<<(*psv).physics<<endl;
	cout<<"chemistry:"<<(*psv).chemistry<<endl;

	system("pause");
}