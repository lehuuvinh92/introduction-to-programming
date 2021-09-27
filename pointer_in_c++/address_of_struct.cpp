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
	cout<<"Address of struct variable sv1:"<<&sv1<<endl;
	cout<<"Address of member variables of sv1 in order id, name, birthday, gender, math, physics, chemistry:"<<endl;
	cout<<&sv1.id<<" "<<&sv1.name<<" "<<&sv1.birthday<<" "<<&sv1.gender<<" "<<&sv1.math<<" "<<&sv1.physics<<" "<<&sv1.chemistry<<endl;
	system("pause");
}