#include<iostream>
#include<conio.h>
using namespace std;
class Series
{
	private:
		int Sum=0;
	public:
		void myseries()   //1-2+3-4+5-6+7-8+9-10=-5
		{
			for(int i=1;i<=10;i++)
			{
				if(i%2==0)
				{
					Sum=Sum-i;
				    cout<<i<<"+"; 
				}
				else
				{
					Sum=Sum+i;
					cout<<i<<"-";	
				}
			}
			cout<<"\b="<<Sum;
		}
};
int main()
{
	Series s;
	s.myseries();
}
