#include <iostream>
using namespace std;

int sumOfDigits(int num){
    if(num == 0){
        return 0;
    }
    return num % 10 + sumOfDigits(num / 10);
}

int main(){
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if(num < 0){
        num = -num;
    }
    int result = sumOfDigits(num);
    cout << "Sum of digits of " << num <<" is: " << result <<  endl;
    return 0;
}