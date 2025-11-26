#include<iostream>
using namespace std;
class Move{
protected:
	int position;
	public:
		Move(){
			position=0;
		}
		Move(int p){
			position=p;
		}
	void forward(){
		position++;
	}
	void display(){
	cout<<position;
		cout<<endl;
	}
	
};

class Move2 : public Move{
	public:
	 Move2(int p) :  Move(p){}
	 
		void backward(){
			position--;
		}
};
int main(){
	Move2 m(5);
	m.display();
	m.forward();
	m.display();
	m.backward();
	m.display();

}
