#include<iostream>
#include<conio.h>
using namespace std;
class series
{
	public:
		void myseries()
		{
			int Sum=0;
	for(int i=1;i<=10;i++)
	{
		Sum=Sum+i;
		cout<<i<<"+";
    }
	cout<<"\b"<<"="<<Sum;	
		}
};
int main()
{
	series s;
	s.myseries();
}
