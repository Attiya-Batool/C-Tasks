#include<iostream>
using namespace std;
class Series
{
     int n=8;
	 int a=1, b=1;
	 int c;
	 public:
	 void myseries()
	 {
	cout<<"Fibonacci Series: ";
	for(int i=1;i<=n;i++)
	{
	cout<<a<<" ";
	c=a+b;
	a=b;
	b=c;
	 }
   }	
};
int main() 
{
    Series S;
    S.myseries();
}
