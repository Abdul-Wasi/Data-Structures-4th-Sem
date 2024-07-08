#include <iostream>
using namespace std;

void decToBase(int dec, int base){
    if(dec == 0){
        return;
    }
    int rem = dec % base;
    dec /= base;
    decToBase(dec, base);
    if (rem < 10){
        cout << rem;
    }else{
        cout << static_cast<char>(rem - 10 + 'A');
    }
}

int main(){
    int dec, base;
    cout << "Enter the decimal number: " << endl;
    cin >> dec;
    cout << "Enter the base (less than 20): " << endl;
    cin >> base;

    if (base >= 20) {
        cout << "Base must be less than 20." << endl;
        return 0;
    }

    if (dec == 0){
        cout << "Result: 0" << endl;
    }else{
        cout << "Result: ";
        decToBase(dec, base);
        cout << endl;
    }
    return 0;
}