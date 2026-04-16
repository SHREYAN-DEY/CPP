#include<bits/stdc++.h>

using namespace std;
bool isValid(string s) {
    unordered_map<char, char> closeToOpen = {
        {')' , '('},
        {'}' , '{'},
        {']' , '['}
    };
    stack<char> st;
    for(char c : s){
       if(closeToOpen.count(c)){
            if(!st.empty() && st.top() == closeToOpen[c]){
                st.pop();
            }
            else{
                return false;
            }
       }
       else{
            st.push(c);
        }
    }
    return st.empty();
}

int main(){
    string s = "([{}])";

    if(isValid(s)){
        cout << "The parenthesises are valid" << endl;
    }
    else{
        cout << "The parenthesises are not valid" << endl;
    }

    return 0;
}