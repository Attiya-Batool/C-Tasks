#include <iostream>
using namespace std;
class Student {
    string name;
    int age;
    float marks;

public:
    void input() {
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter marks: ";
    cin >> marks;
    }
    void output() {
    cout << "Student Details"<<endl;;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1; 

    s1.input();  
    s1.output();

    return 0;
}

