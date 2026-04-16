#include<bits/stdc++.h>

using namespace std;
// vector<int> dailyTemperatures(vector<int>& temperatures) {
//     int l = temperatures.size();
//     vector<int> res(l, 0);
//     for (int i = 0; i < l; i++)
//     {
//         int count = 1;
//         int j = i + 1;
//         while (j < l)
//         {
//             if(temperatures[i] < temperatures[j]){
//                 break;
//             }
//             j++;
//             count++;
//         }

//         if(j == l){
//             count = 0;
//         }
//         res[i] = count;               
//     }

//     return res;
// }
vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> res(n, 0);
    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && temperatures[i] > st.top().first)
        {
            res[st.top().second] = i - st.top().second;
            st.pop();
        }
        st.push({temperatures[i], i});        
    }
    return res;
}

int main(){
    vector<int> temp = {30,38,30,36,35,40,28};
    vector<int> res = dailyTemperatures(temp);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    

    return 0;
}