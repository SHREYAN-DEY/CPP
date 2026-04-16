// This code includes array, string, for-loop, while-loop

#include<bits/stdc++.h>

using namespace std;
int main(){
    int myArr[4] = {1, 2, 3, 4};
    string myName = "Shreyan";
    cout << "My name is " << myName << endl;

    // print using for loop
    cout << "The array holds";
    for (int i = 0; i < 4; i++)
    {
        cout << " > " << myArr[i];
    }
    cout << endl;

    // print using while loop
    int j = 0;
    cout << "The array holds";
    while (j < 4)
    {
        cout << " > " << myArr[j];
        j++;
    }
    cout << endl;
    

    return 0;
}