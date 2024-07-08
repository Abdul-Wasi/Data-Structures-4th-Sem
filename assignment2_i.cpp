#include<iostream>
using namespace std;

void decToHex(int dec){
    if(dec == 0){
        return;
    }
    int rem = dec % 16;
    dec /= 16;

    decToHex(dec);

    if(rem < 10){
        cout << rem;
    }else{
        cout << static_cast<char>(rem - 10 + 'A');
    }
}

int main(){
    int dec;
    cout << "Enter the decimal number:" << endl;
    cin >> dec;

    if(dec == 0){
        cout << "Hexadecimal representation is: 0" << endl;
    }else{
        cout << "Hexadecimal representation is: ";
        decToHex(dec);
        cout << endl;
    }
    return 0;
}