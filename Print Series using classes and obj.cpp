#include<iostream>
#include<conio.h>
using namespace std;
int main()
{    //1+2+3+4+5+6+7+8+9+10=55
	int Sum=0;
	for(int i=1;i<=10;i++)
	{
		Sum=Sum+i;
		cout<<i<<"+";
    }
	cout<<"\b"<<"="<<Sum;
}
