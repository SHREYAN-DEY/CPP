#include<bits/stdc++.h>

using namespace std;

int reverseNum(int n){
    int revNum = 0;
    while (n>0)
    {
        int ld = n%10;
        revNum = revNum * 10 + ld;
        n = n / 10;
    }
    return revNum;
}
int main(){
    int n = 12345;
    cout << "Reverse of " << n << " is : " << reverseNum(n) << endl;

    return 0;
}