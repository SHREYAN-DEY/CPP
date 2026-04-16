#include<bits/stdc++.h>

using namespace std;
int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<double> st;
    vector<pair<int, int>> pr;
    for (int i = 0; i < position.size(); i++)
    {
        pr.push_back({position[i], speed[i]});
    }

    sort(pr.rbegin(), pr.rend());
    
    for(auto& p : pr){
        st.push_back((double)(target - p.first) / p.second);
        if(st.size() >= 2 && st.back() <= st[st.size() - 2]){
            st.pop_back();
        }
    }
    return st.size(); 
}

int main(){
    int target = 10;
    // vector<int> pos = {3, 5, 7};
    // vector<int> speed = {3, 2, 1};
    vector<int> pos = {7, 3, 5};
    vector<int> speed = {1, 3, 2};
    cout << "Number of fleets of cars : " << carFleet(target, pos, speed) << endl;

    return 0;
}