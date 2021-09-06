// size-of-data-type.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main() 
{ 
   cout << "Kich thuoc cua char la: " << sizeof(char) << endl; 
   cout << "Kich thuoc cua int la: " << sizeof(int) << endl; 
   cout << "Kich thuoc cua short int la: " << sizeof(short int) << endl; 
   cout << "Kich thuoc cua long int la: " << sizeof(long int) << endl; 
   cout << "Kich thuoc cua float la: " << sizeof(float) << endl; 
   cout << "Kich thuoc cua double la: " << sizeof(double) << endl; 
   cout << "Kich thuoc cua wchar_t la: " << sizeof(wchar_t) << endl;
   system("pause");
}
