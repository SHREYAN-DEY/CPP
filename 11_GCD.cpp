#include<bits/stdc++.h>

using namespace std;

int findGcdBF(int n1, int n2){
    int gcd = 1;
    for (int i = 1; i < min(n1, n2); i++)
    {
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int n1, n2;
    cout << "Enter a number n1 : ";
    cin >> n1;
    cout << "Enter a number n2 : ";
    cin >> n2;
    cout << "GCD of " << n1 << " and " << n2 << " is : " << findGcdBF(n1, n2) << endl;

    return 0;
}