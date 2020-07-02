#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	char name[256];
	int age = 0;
	strcpy_s(name, GetName());
	cout << "The name is "<<name << endl;
	GetAge(&age);
	cout << "The age is " << age << endl;
	cin >> age;
}