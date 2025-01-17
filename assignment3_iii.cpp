#include <iostream>
using namespace std;

void reverseString(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    int start = 0;
    int end = length-1;
    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main(){
    char str[100];
    cout << "Enter the string to be reversed" << endl;
    cin.getline(str, 100);
    reverseString(str);
    cout << str << endl;
    return 0;
}