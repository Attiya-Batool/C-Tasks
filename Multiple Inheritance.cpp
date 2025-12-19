#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void in()
		{
			cout<<"Enter value of a ";
			cin>>a;
		}
		void out()
		{
			cout<<"Value of a is "<<a<<endl;
		}
};
class B
{
	private:
		int b;
	public:
		void input()
		{
			cout<<"Enter value of b ";
			cin>>b;
		}
		void output()
		{
			cout<<"Value of b is "<<b<<endl;
		}
};
class C: public A, public B
{
	private:
		int c;
	public:
		void get()
		{
			A::in();
			B::input();
			cout<<"Enter value of c ";
			cin>>c;
		}
		void show()
		{
			A::out();
			B::output();
			cout<<"Value of c is "<<c<<endl;
		}
};
int main()
{
	C obj;
	obj.get();
	obj.show();
}
