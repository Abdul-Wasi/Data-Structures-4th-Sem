#include <iostream>
using namespace std;

int findMax(int arr[], int n){
    if(n == 1){
        return arr[0];
    }

    int maxofRest = findMax(arr, n-1);

    if(arr[n-1] > maxofRest){
        return arr[n-1];
    }else{
        return maxofRest;
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxElement = findMax(arr, n);
    cout << "The largest element in the array is: " << maxElement << endl;

    return 0;
}