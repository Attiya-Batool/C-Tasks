#include<iostream>
using namespace std;
class Maths{
public:
	static int cube(int x){
return x*x*x;
 }
   };
int main(){

	cout<<"Cube of 4:"<<Maths::cube(4)<<endl;
		cout<<"Cube of 5:"<<Maths::cube(5)<<endl;
	return 0;
}
