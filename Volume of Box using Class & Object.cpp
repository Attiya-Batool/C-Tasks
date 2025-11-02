#include<iostream>
using namespace std;
class Car{
	public:
	string name;
	string color;
	int year;
};
int main(){
	Car c1, c2;
	c1.color="white";
	c1.name="Honda City";
	c1.year=2022;
	cout<<"Car color:"<<c1.color<<endl;
	cout<<"Car name:"<<c1.name<<endl;
	cout<<"Car year:"<<c1.year<<endl;
	
	c2.color="black";
	c2.name="Sportage";
	c2.year=2024;
	cout<<"Car name:"<<c2.name<<endl;
	cout<<"Car year:"c2.year<<endl;
	cout<<"Car color:"<<c2.color<<endl;
}
