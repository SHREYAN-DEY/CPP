#include<bits/stdc++.h>

using namespace std;

void explainPair(){
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

void explainVector(){
    vector<int> v;          // v = {}
    v.push_back(1);         // v = {1}
    v.emplace_back(2);      // v = {1, 2}  push_back is similar to emplace_back
    v.emplace_back(3);      // v = {1, 2, 3}
    cout << "Vector : " << v[0] << " " << v[1] << endl;

    vector<pair<int, int>> vec; // vec = {}
    vec.push_back({1, 2});      // vec = {{1, 2}}
    vec.emplace_back(3, 5);     // vec = {{1, 2}, {3, 5}}
    
    vector<int> v(5, 100);      // v = {100, 100, 100, 100, 100}
    vector<int> v(5);           // v = {0, 0, 0, 0, 0}
    vector<int> v1(5, 20);      // v1 = {20, 20, 20, 20, 20}
    vector<int> v2(v1);         // v2 = v1 (a copy of v1)

    vector<int>::iterator it = v.begin();  // points to the starting address of a vector "v"
    cout << "vector element using iterato : " << *(it) << endl;
    // vector<int>::iterator it = v.end();  // points to the right after ending address of a vector "v"

    // vector<int>::iterator it = v.rend(); // rend = reverse end
    // vector<int>::iterator it = v.rbegin();   // begin = reserse start

    // in a long form for-loop for iterator
    for(vector<int>::iterator it1 = v.begin(); it1 != v.end(); it1++){
        cout << *it1 << " ";
    }
    cout << endl;
    // short form
    for(auto it2 = v.begin(); it2 != v.end(); it2++){
        cout << *it2 << " ";
    }
    cout << endl;
    for(auto it3 : v){
        cout << it3 << " ";
    }
    cout << endl;
    
    // Erase operation------
    // v.erase(v.begin());
    // for(auto it3 : v){
    //     cout << it3 << " ";
    // }
    // cout << endl;

    // v.erase(v.begin() + 1, v.begin() + 2);
    // for(auto it3 : v){
    //     cout << it3 << " ";
    // }
    // cout << endl;

    // Insertion operation-----
    v.insert(v.begin() + 1, 3, 300);
    for(auto it3 : v){
        cout << it3 << " ";
    }
    cout << endl;
    
    vector<int> copy(2, 50); // copy = {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());
    for(auto it3 : v){
        cout << it3 << " ";
    }
    cout << endl;
    
    cout << "Size of vector V is : " << v.size() << endl;
    
    v.pop_back();
    for(auto it3 : v){
        cout << it3 << " ";
    }
    cout << endl;
    
    v1.swap(v2);

    v.clear();

    cout << v.empty();
}

void explainList(){
    list<int> ls;
    ls.push_back(2);        // {2}
    ls.emplace_back(4);     // {2, 4}
    ls.push_front(5);       // {5, 2, 4}
    ls.emplace_front(6);     // {6, 5, 2, 4}

    // other operations are similar to vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(2);        // {2}
    dq.emplace_back(4);     // {2, 4}
    dq.push_front(5);       // {5, 2, 4}
    dq.emplace_front(6);    // {6, 5, 2, 4}

    dq.pop_back();          // {6, 5, 2}
    dq.pop_front();         // {5, 2}

    dq.back();
    dq.front();

    // other operations are similar to vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack(){
    stack<int> st;
    st.push(1);     // {1}
    st.push(2);     // {2, 1}
    st.push(3);     // {3, 2, 1}
    st.push(4);     // {4, 3, 2, 1}
    st.emplace(5);  // {5, 4, 3, 2, 1}

    cout << st.top();   // prints 5 "** st[2] is invalid **"

    st.pop();       // {4, 3, 2, 1}

    cout << st.size();
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue(){
    queue<int> q;
    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(3);   // {1, 2, 3}

    q.back() += 5;  // {1, 2, (3 + 5 = 8)} -> {1, 2, 8}
    
    cout << q.front();  // prints 1
    cout << q.back();   // prints 8

    q.pop();        // {2, 8}
}

void explainPriorityQueue(){
    priority_queue<int> Mpq;
    Mpq.push(5);         // {5}
    Mpq.push(2);         // {5, 2}
    Mpq.push(8);         // {8, 5, 2}
    Mpq.emplace(10);     // {10, 8, 5, 2}

    cout << Mpq.top();   // prints 10

    Mpq.pop();           // {8, 5, 2}
    // size, swap, empty fontions are all same as others

    // minheap
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5);         // {5}
    mpq.push(2);         // {2, 5}
    mpq.push(8);         // {2, 5, 8}
    mpq.emplace(10);     // {2, 5, 8, 10}
}

void explainSet(){
    set<int> st;
    st.insert(1);       // {1}
    st.emplace(2);      // {1, 2}
    st.insert(2);       // {1, 2}
    st.insert(4);       // {1, 2, 4}
    st.insert(3);       // {1, 2, 3, 4}

    // begin, end, rbegin, rend, size, empty & swap are all same

    auto it = st.find(3);   // {1, 2, 3, 4} returns a pointer to 3
    auto it = st.find(6);   // {1, 2, 3, 4} returns st.end

    //st.erase(3);        // {1, 2, 4}

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    // unordered set
    unordered_set<int> ust;
    // all operations are same 
}

void explainMap(){
    // {key : value}
    // keys are unique
    // maps stores unique keys in sorted order
    map<int, int> mpp1;             // key - 1_int : value - 1_int
    map<int, pair<int, int>> mpp2;  // key - 1_int : value - 2_int
    map<pair<int, int>, int> mpp3;  // key - 2_int : value - 1_int

    mpp1[1] = 2;    // {key - 1 : value - 2} -> {1,2}
    mpp1.emplace(3, 1);
    mpp1.insert(2, 4);

    mpp3[{2, 3}] = 10;

    for(auto it : mpp1){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp1[1];
    cout << mpp1[5];
    
    auto it = mpp1.find(3);
    // cout << *(it).second;

    auto it = mpp1.find(5);
    // erase, swap, size, empty, upper_bound, lower_bound all same
}

void explainMultimap(){
    // everything is same as map, only it can store multiple keys
    // only mpp[key] cant be used here
}

void explainUnorderedMap(){
    // same as set and unorderd set differance
}

// algorithms
bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    
    // sort(a, a + 4);
    //sort(v.begin(), v.end());       // if we use vector
    // sort(a+2, a+4);
    // sort(a, a+4, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a+3, comp);

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 16937489;
    int cnt = __builtin_popcountll();
}


int main(){
    
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();
    explainExtra();

    return 0;
}