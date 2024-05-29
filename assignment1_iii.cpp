//WAP to find biggest and smallest number in an array

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

    //Checking for max
    int max = arr[0];
    for(int j = 0; j < n; j++){
        if(max < arr[j]){
            max = arr[j];
        }
    }
    
    //Checking for min
    int min = arr[0];
    for(int j = 0; j < n; j++){
        if(min > arr[j]){
            min = arr[j];
        }
    }

    cout << "The greatest number is: " << max << endl;
    cout << "The smallest number is: " << min << endl;
    return 0;
}
