#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1 = "introduction to programming";
	string s2 = "c++ programming language";

	cout<<"length of s1 = "<<s1.length()<<endl;

	cout<<"substring has 10 characters of s1 start at 5:"<<s1.substr(5, 10)<<endl;

	cout<<"position of 'duc' string in s1:"<<s1.find("duc")<<endl;

	s1.erase(5, 15);
	cout<<"s1 string after erase:"<<s1<<endl;

	s1.replace(5, 10, "123123123");
	cout<<"s1 string after replace:"<<s1<<endl;

	cout<<"s1 compare s2:"<<s1.compare(s2)<<endl;

	s1.swap(s2);
	cout<<"s1 after swap:"<<s1<<endl;
	cout<<"s2 after swap:"<<s2<<endl;

	s1.insert(10, s2);
	cout<<"s1 after insert s2:"<<s1<<endl;

	system("pause");
}