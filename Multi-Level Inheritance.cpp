#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
		int a;
	public:
		void in()
		{
			cout<<"Enter a value of a: ";
			cin>>a;
		}
		void out()
		{
			cout<<"Value of a is: "<<a<<endl;
		}
};
class B: public A
{
	private:
		int b;
	public:
		void in()
		{
			A::in();
			cout<<"Enter value of b: ";
			cin>>b;
		}
		void out()
		{
			A::out();
			cout<<"Value of b is: "<<b<<endl;
		}
};
class C: public B
{
	private:
		int c;
	public:
		void in()
		{
			B::in();
			cout<<"Enter value of c: ";
			cin>>c;
		}
		void out()
		{
			B::out();
			cout<<"Value of c is: "<<c<<endl;
		}
};
int main()
{
	C obj;
	obj.in();
	obj.out();
}
