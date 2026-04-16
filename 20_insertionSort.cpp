#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "After sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr [i] << " ";
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

    insertionSort(arr, n);

    return 0;
}