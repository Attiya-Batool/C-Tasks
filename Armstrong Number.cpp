#include<iostream>
using namespace std;
int main(){
int a,b,sum=0;
cout<<"Enter a number:";
cin>>a;
for(int temp=a; temp!=0; temp/=10){
	b= temp%10;
	sum+= b*b*b;
	}
	if(sum==a){
	cout<<"It is an Armstrong Number.";
    }
	else{
		cout<<"Not an Armstrong Number."<<endl;
	}
}
