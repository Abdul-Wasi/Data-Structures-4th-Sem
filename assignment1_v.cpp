// WAP to display only prime numbers in an array

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    int i = 0;
    while (i < n)
    {
        cout << "Enter the " << i << " th element: ";
        cin >> arr[i];
        i++;
    }


    cout << "The prime numbers are: ";

    for(int j = 0; j < n; j++){
        int num = arr[j];
        bool isPrime = true;

        if(num <= 1){
            isPrime = false;
        }else if (num == 2){
            isPrime = true;
        }else{
            if((num % 2) == 0){
                isPrime = false;
            }else{
                for(int k = 3; k < sqrt(num); k += 2){
                    if((num % k) == 0){
                        isPrime = false;
                        break;
                    }
                }
            }
        }if (isPrime){
            cout << num << "\t";
        }

        
        
    }
return 0;
}
