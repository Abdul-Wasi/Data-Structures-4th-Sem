#include<iostream>
using namespace std;

void toUpperCase(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main(){
    char str[100];
    cout << "Enter a string to be converted into upper case: " << endl;
    cin.getline(str, 100);
    toUpperCase(str);
    cout << str;
    return 0;
}