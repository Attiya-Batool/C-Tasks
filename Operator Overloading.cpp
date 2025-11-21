#include<iostream>
using namespace std;
class Add{
public:
	int n;
	Add (int value=0){
		n=value;
	}
	Add operator + (Add obj){
		Add result;
		result.n= n+obj.n;
		return result;
			}
	};
	int main(){
		Add a1(5), a2(6);
		Add result= a1+a2;
		cout<<"Sum="<<result.n;
	}
