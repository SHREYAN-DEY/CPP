#include<bits/stdc++.h>

using namespace std;

int countDigits(int n){
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

int main(){
    int n = 1234567890;
    cout << "No of digits in N is : " << countDigits(n) << endl;

    return 0;
}