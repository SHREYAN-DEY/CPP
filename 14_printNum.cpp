#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    int fac;
    if(n > 0){
        if(n == 1) return 1;
        else{
            fac = n * factorial(n - 1);
        }
    }
    else if (n == 0) return 1;
    else return -1;
    return fac;
}

int main(){
    int n = 5;
    int fac = factorial(n);
    if(fac == -1) cout << "Invalid condition" << endl;
    else cout << "Factorial of " << n << " is : " << fac << endl;

    return 0;
}