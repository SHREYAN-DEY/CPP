#include<bits/stdc++.h>

using namespace std;

void countFreq1(int *arr, int n){
    vector<int> visited(n, false);

    for(int i = 0; i < n; i++){
        if(visited[i] == true){
            continue;
        }
        else{
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
            {
                if(arr[i] == arr[j]){
                    cnt++;
                    visited[j] == true;
                }
            }
            cout << arr[i] << " appears " << cnt << " times" << endl;
        }
    }
}

void countFreq2(int *arr, int n){
    // create an unordered_map to store frequency of each element
    unordered_map<int, int> map;

    // traverse the array and count frequencies
    for(int i = 0; i < n; i++){
        map[arr[i]]++;
    }

    // traverse through the unordered_map and print frequencies
    for(auto x : map){
        cout << x.first << " " << x.second << endl;
    }
}

int main(){
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // countFreq1(arr, n);   
    countFreq2(arr, n);   
    
    return 0;
}