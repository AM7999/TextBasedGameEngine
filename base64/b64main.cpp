#include <iostream>
#include "b64.cpp"
using namespace std;

int main() {
    int menu;
    cout << "Do you want to encode(1) or decode(2)?" << endl;
    cin >> menu;

    if(menu == 1) {
        string inputString;
        cout << "Please enter something you want to convert to base64 (cant use spaces): "; cin >> inputString;
        string encodedString = base64_encode(inputString);
        cout << "Encoded String: " << encodedString << endl;
        return 0;
    } else if(menu == 2) {
        string inputString;
        cout << "Please enter something to decode from base64: "; cin >> inputString;
        string decodedString = base64_decode(inputString);
        cout << "Decoded String: " << decodedString << endl;
    }
   //Ikx1Y3k=
}
