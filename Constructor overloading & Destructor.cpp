#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int age;

Student(){
    name = "unknown";
	age = 0;
	cout<<"Default Constructor called!"<<endl;
	
}
Student(string n, int a){
   name=n;
   age= a;
   cout<<"Parameterized constructor called!"<<endl;
	
}
~Student(){
	cout<<"Destructor called for Student!"<<endl;
}
void display(){
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
}
};
int main(){
	Student s1;
	Student s2("Attiya", 20);
	cout<<endl;
	s1.display();
	s2.display();
	
}
