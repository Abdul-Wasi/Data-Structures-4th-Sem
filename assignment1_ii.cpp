//WAP to find product of n numbers

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

    float prod = 1;
    
    int j = 0;
    while (j < n)
    {
        prod *= arr[j];
        j++;
    }

    cout << "The product of numbers is: " << prod << endl;
    return 0;
}
