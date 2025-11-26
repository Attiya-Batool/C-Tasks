#include<iostream>
using namespace std;
class Move{
protected:
	int position;
	public:
		Move(){
			position=0;
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
		void backward(){
			position--;
		}
};
int main(){
	Move2 m;
	m.display();
	m.forward();
	m.display();
	m.backward();
	m.display();

}
