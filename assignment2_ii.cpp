#include <iostream>
using namespace std;

void decToBase(int dec, int base){
    if(dec == 0){
        return;
    }
    int rem = dec % base;
    dec /= base;
    decToBase(dec, base);
    cout << rem;
}

int main(){
    int dec, base;
    cout << "Enter the decimal number: " << endl;
    cin >> dec;
    cout << "Enter the base (less than 10): " << endl;
    cin >> base;

    if (base >= 10) {
        cout << "Base must be less than 10." << endl;
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