//WAP to find average of n numbers in an array

#include<iostream>
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

    float sum = 0;
    int j = 0;
    while (j < n)
    {
        sum += arr[j];
        j++;
    }
    
    float ave = sum/n;
    cout << "The average of numbers is: " << ave << endl;
    return 0;
}