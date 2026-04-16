#include<bits/stdc++.h>

using namespace std;

// bruteforce methode
bool findPalindrome(string str){
    int left = 0, right = str.length() - 1;
    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}

bool findPalindromeOpti(string str, int i){
    if(i >= str.length() / 2) return true;
    if(str[i] != str[str.length() - i - 1]) return false;
    return findPalindromeOpti(str, i + 1);
}

int main(){
    
    string str = "ABCDCBA";
    bool ans = findPalindromeOpti(str, 0);
    if (ans == true) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}