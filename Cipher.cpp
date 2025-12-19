#include <iostream>
#include <string>
using namespace std;

class Cipher {
    int key;     

public:
    Cipher(int k) {
        key = k;
    }

    string encrypt(string msg) {
        for (int i = 0; i < msg.length(); i++) {
            msg[i] = msg[i] + key;   
        }
        return msg;
    }

    string decrypt(string msg) {
        for (int i = 0; i < msg.length(); i++) {
            msg[i] = msg[i] - key;  
        }
        return msg;
    }
};

int main() {
    Cipher c1(3);   

    string text;
    cout << "Enter text: ";
    getline(cin, text);

    string enc = c1.encrypt(text);
    cout << "Encrypted text: " << enc << endl;

    string dec = c1.decrypt(enc);
    cout << "Decrypted text: " << dec << endl;

    return 0;
}

