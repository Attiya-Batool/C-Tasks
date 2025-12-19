#include<iostream>
using namespace std;
class Test
{
	private:
		int n;
	public:
		Test()
		{
			n=0;
		}
		void input()
		{
			cout<<"Enter any number: ";
			cin>>n;
		}
		void show()
		{
			cout<<"Value of n is = "<<n;
		}
};
int main()
{
	Test *ptr;
	ptr=new Test;
	ptr->input();
	ptr->show();
}
