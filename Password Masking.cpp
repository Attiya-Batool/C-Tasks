#include<iostream>
#include<conio.h>
using namespace std;
class Password{
	public:
	string pass;
	string username;
	string preset= "Atiya123";
	void inputPassword(){
		cout<<"Enter username:"<<endl;
		cin>>username;
		cout<<"Enter you password:"<<endl;
		pass="";
		while (true){
        char ch= getch();
        if (ch==13)
        break;
        cout<<"*";
        pass+=ch;
		}
		cout<<endl;
			}
		void checkStrength(){
			if(pass.length()<8)
			cout<<"Weak password!(must include 8 or more characters)"<<endl;
			else
			cout<<"Strong password!"<<endl;
		}
		void checkPassword(){
			if(pass==preset)
			cout<<"Accurate password! Access granted."<<endl;
			else
			cout<<"Incorrect password! Access denied."<<endl;
		}
	
};
int main(){
	Password p;
	p.inputPassword();
	p.checkStrength();
	p.checkPassword();
}
