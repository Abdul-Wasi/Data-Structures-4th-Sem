//WAP to display only even numbers of an array

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    int i = 0;
    while(i < n){
        cout << "Enter the "<< i << " th element: ";
        cin >> arr[i];
        i++;
    }

    
    for(int j = 0; j < n; j++){
        if((arr[j] % 2) == 0){
            cout << arr[j] <<"\t";
        }
    }

    return 0;
}
