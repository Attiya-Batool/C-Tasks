#include<iostream>
using namespace std; 
int main(){
int n,r,sum=0;
cout<<"Enter a number:";
cin>>n;
for(int temp=n; temp!=0; temp/=10){
	r= temp%10;
	sum+= r*r*r;
	}
	if(sum==n){
	cout<<"It's an Armstrong Number.";
    }
	else{
	cout<<"It is not an Armstrong Number.";
	}
	
}
