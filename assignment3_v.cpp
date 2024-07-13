#include<iostream>
using namespace std;

void concatenateStrings(char str1[], const char str2[]){
    int i = 0;
    while(str1[i] != '\0'){
        i++;
    }

    int j = 0;
    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    // for(int j = 0; str2[j] != '\0'; i++, j++){
    //     str1[i] = str2[j];
    // }
    str1[i] = '\0';
}

int main(){
    char str1[200];
    char str2[100];
    cout << "Enter the first string: " <<  endl;
    cin.getline(str1, 200);
    cout << "Enter the second string: " << endl;
    cin.getline(str2, 100);
    concatenateStrings(str1, str2);
    cout << "The concatenated string is: " << str1 << endl;
    return 0;
}