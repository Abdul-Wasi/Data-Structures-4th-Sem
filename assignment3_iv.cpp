#include<iostream>
using namespace std;

bool isPalindrome(const char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    int start = 0;
    int end = length - 1;
    while(start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    char str[100];
    cout << "Enter a string: " << endl;
    cin.getline(str, 100);
    if(isPalindrome(str)){
        cout << "The string is a palindrome." << endl;
    }else{
        cout << "The string is not a palindrome" << endl;
    }
    return 0;
}