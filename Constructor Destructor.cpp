#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	public:
	int a;
	
	Student()
	{
	cout<<"Constructor called";
	}
	~Student()
	{
	cout<<"\nDestructor called";
	}
};
int main()
{
	Student s;
}
