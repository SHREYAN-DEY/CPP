#include<bits/stdc++.h>

using namespace std;
int factorial(int a){
    int fac = 1;
    if (a > 0)
    {
        for (int i = a; i > 0; i--){
            fac *= a;
            a--;
        }
        return fac;
    }
    return fac;    
}

int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;

    cout << "The factorial of " << a << " is : " << factorial(a) << endl;
    return 0;
}