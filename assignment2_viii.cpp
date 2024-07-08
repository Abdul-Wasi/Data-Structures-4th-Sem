#include <iostream>
using namespace std;

bool isPrimeHelper(int number, int divisor){
    if(number <= 2){
        return true;
    }
    if((number % divisor) == 0){
        return false;
    }
    if((divisor*divisor) > number){
        return true;
    }
    return isPrimeHelper(number, divisor + 1);
}

bool isPrime(int number){
    return isPrimeHelper(number, 2);
}

int main(){
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    if(isPrime(number)){
        cout << number << " is a prime number" << endl;
    }else{
        cout << number << " is not a prime number" << endl;
    }
    return 0;
}