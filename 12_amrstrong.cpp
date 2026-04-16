#include<bits/stdc++.h>

using namespace std;

bool findArmstrongNum(int n){
    int k = to_string(n).length();
    int powSum = 0;
    int temp = n;
    while (n > 0)
    {
        int dig = n % 10;
        powSum = powSum + pow(dig, k);
        n = n / 10;
    }
    return temp == powSum;
}

int main(){
    int n = 371;
    if (findArmstrongNum(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}