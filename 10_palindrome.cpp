#include<bits/stdc++.h>

using namespace std;

int isPalindrome(int n){
    int revNum = 0;
    int temp = n;
    while (n>0)
    {
        int ld = n%10;
        revNum = revNum * 10 + ld;
        n = n / 10;
    }
    if(revNum == temp){
        return 1;
    }
    else{
        return 0; 
    }
}

int main(){
    int n = 77777;

    if(isPalindrome(n)){
        cout << n << " is a palindrome" << endl;
    }
    else{
        cout << n << " is not a palindrome" << endl;
    }

    return 0;
}