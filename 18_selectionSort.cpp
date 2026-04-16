#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        // Swap numbers
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp; 
    }

    cout << "After selection sort : ";
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
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);
    

    return 0;
}