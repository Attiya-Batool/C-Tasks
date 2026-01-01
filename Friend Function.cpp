#include <iostream>
using namespace std;
class FriendFunc2; 

class FriendFunc1 
{
private:
    int num1, num2;
public:
    void input() 
	{
        cout << "Enter first number: "; cin >> num1;
        cout << "Enter second number: "; cin >> num2;
    }
    friend float average(FriendFunc1, FriendFunc2);
};

class FriendFunc2 {
private:
    int num3, num4, num5;
public:
    void input()
	{
        cout << "Enter third number: "; cin >> num3;
        cout << "Enter fourth number: "; cin >> num4;
        cout << "Enter fifth number: "; cin >> num5;
    }
    friend float average(FriendFunc1, FriendFunc2);
};
float average(FriendFunc1 f1, FriendFunc2 f2) {
    return (f1.num1 + f1.num2 + f2.num3 + f2.num4 + f2.num5) / 5.0;
}

int main()
{
    cout << "Lab No. 11\nName: Atiya Batool\nRoll no: 008\nDate: 31-12-2025\n\n";

    FriendFunc1 f1;
    FriendFunc2 f2;

    f1.input();
    f2.input();

    cout << "\nAverage: " << average(f1, f2) << endl;

    return 0;
}

