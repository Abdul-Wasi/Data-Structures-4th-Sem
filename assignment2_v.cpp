#include <iostream>
using namespace std;

void revNum(int n){
    if(n == 0){
        return;
    }
    cout << n % 10;
    revNum(n / 10); 
}

int main(){
int n;
cout << "Enter a number to reverse: ";
cin >> n;
cout << "The reversed number is : ";
revNum(n); 
return 0;
}