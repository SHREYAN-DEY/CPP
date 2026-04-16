// Print name N times using recursion
#include<bits/stdc++.h>

using namespace std;

void printName(string st, int n, int cnt){
    if(cnt < n){
        cnt++;
        printName(st, n, cnt);
        cout << st << "\n";
    }
    return;
}

int main(){
    int n = 3;
    string st = "SD";
    printName(st, n, 0);

    return 0;
}