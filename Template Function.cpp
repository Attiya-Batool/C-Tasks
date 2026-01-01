#include <iostream>
using namespace std;

template <class T>
T Greater(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    cout << "Lab No 12" << endl;
    cout << "Atiya Batool-008" << endl;
    int a, b;
    float c, d;
    char ch1, ch2;

    cout << "Enter two integer values: ";
    cin >> a >> b;
    cout << Greater(a, b) << " is greater." << endl;

    cout << "Enter two floating-point values: ";
    cin >> c >> d;
    cout << Greater(c, d) << " is greater." << endl;

    cout << "Enter two characters: ";
    cin >> ch1 >> ch2;
    cout << Greater(ch1, ch2) << " has greater ASCII value." << endl;
return 0;
}

