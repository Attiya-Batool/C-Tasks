#include<iostream>
using namespace std;
class Student {
	public:
	string name;
	int age;

	Student(string n, int a){
	name=n;
	age=a;
		cout<<"Paramerterized constructor called!"<<endl;
		
	}
    Student(cons Student& obj){
	name=obj.name;
	age=obj.name;
		cout<<"Copy Constructor called!"<<endl;
	}
	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
	}
};
int main(){
Student s1("Attiya", 20);
Student s2=s1;
s1.display();
s2.display();
	}
