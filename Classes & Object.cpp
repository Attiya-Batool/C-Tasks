#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int rollNo;
	char grade;
	int marks;
	
	void GetDetails(){
		cout<<"Enter Name of Student:"<<endl;
		cin>>name;
		cout<<"Enter Roll No:"<<endl;
		cin>>rollNo;
		cout<<"Enter grade:"<<endl;
		cin>>grade;
		cout<<"Enter marks obtained by the student:"<<endl;
		cin>>marks;
	}
	void PrintDetails(){
		cout<<"Student's Name:"<<name<<endl;
		cout<<"Student's Roll No:"<<rollNo<<endl;
		cout<<"Student's grade:"<<grade<<endl;
		cout<<"Student's marks:"<<marks<<endl;
		
	}
};
int main(){

Student s1;
cout<<"Enter details of Student :"<<endl;
s1.GetDetails();
s1.PrintDetails();
}
