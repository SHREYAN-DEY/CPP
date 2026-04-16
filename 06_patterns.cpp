#include<bits/stdc++.h>

using namespace std;
void pattern1(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern2(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern3(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for(int j = n; j > i; j--){
            cout << " * ";
        }
        cout << endl;
    }
    
}

void pattern4(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < (n - i - 1); i++){
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); i++){
            cout << " * ";
        }
        for (int i = 0; i < (n - i - 1); i++){
            cout << " ";
        }
        cout << endl;
    }
    
}
void pattern5(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
}

int main(){
    int n;
    cout << "Enter 1-22 for pattern : ";
    cin >> n;

    switch (n)
    {
    case 1:
        pattern1();
        break;
    case 2:
        pattern2();
        break;
    case 3:
        pattern3();
        break;
    case 4:
        pattern4();
        break;
    case 5:
        pattern5();
        break;
    
    default:
        cout << "Invalid" << endl;
        break;
    }

    return 0;
}