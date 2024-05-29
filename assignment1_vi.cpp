//WAP to find variance, standard deviation of n elements of an array

#include <iostream>
#include<math.h>
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
    for(int j = 0; j < n; j++){
        sum += arr[j];
    }

    float mean = sum/n;
    float sum2 = 0;

    for(int j = 0; j < n; j++){
        float term1 = arr[j] - mean;
        float term2 = term1*term1;
        sum2 += term2;
    }

    float variance = sum2/n;
    cout << "Variance is: " << variance << endl;

    float sd;
    sd = sqrt(variance);
    cout << "Standard deviation is: " << sd << endl;

    return 0;
}
