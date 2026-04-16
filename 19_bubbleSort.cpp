#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "After sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] =  {8,7,9,2,3,1,5,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    return 0;
}