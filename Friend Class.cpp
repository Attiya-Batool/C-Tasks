#include<iostream>
using namespace std;
class Box{
int length=7;
public:
	friend class BoxPrinter;
};
class BoxPrinter{
	public:
		void print (Box b){
			cout<<"Length:"<<b.length<<endl;
		}
};
int main(){
	Box b;
	BoxPrinter p;
	p.print(b);
	
}
