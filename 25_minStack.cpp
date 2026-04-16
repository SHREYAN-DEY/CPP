#include<bits/stdc++.h>

using namespace std;

// bruteforce-----------------------
// stack<int> st;
// MinStack() {
// }
    
// void push(int val) {
//     st.push(val);
// }

// void pop() {
//     st.pop(); 
// }

// int top() {
//     return st.top();
// }

// int getMin() {
//     stack<int> temp;
//     int mini = st.top();
//     while(st.size()){
//         mini = min(mini, st.top());
//         temp.push(st.top());
//         st.pop();
//     }

//     while(temp.size()){
//         st.push(temp.top());
//         temp.pop();
//     }

//     return mini;
// }


// optimal---------------------------
stack<int> st;
stack<int> mini;
MinStack() {
}
    
void push(int val) {
    st.push(val);
    if(!mini.empty()){
        val = min(val, mini.top());
    }
    mini.push(val);
}

void pop() {
    if(st.top() == mini.top()){
        st.pop();
        mini.pop();
    }
    else{
        st.pop();
    }
}

int top() {
    return st.top();
}

int getMin() {
    return mini.top();
}

int main(){
    // stack<int> st;
    // st.push(1);
    // st.push(2);

    // cout << st.size();

    return 0;
}