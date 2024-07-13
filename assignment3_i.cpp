#include <iostream>
#include <string>
using namespace std;

#define MAX 100

bool compareString(const char str1[], const char str2[]){
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return 0;
        }
        i++;
    }
    return str1[i] == '\0' && str2[i] == '\0';
}

int main(){
    char str1[MAX], str2[MAX];
    cout << "Enter the first string: " << endl;
    cin.getline(str1, MAX);
    cout << "Enter the second string: " << endl;
    cin.getline(str2, MAX);

    if(compareString(str1, str2)){
        cout << "The strings are same" << endl;
    }else{
        cout << "The strings are not same" << endl;
    }
    return 0;
}