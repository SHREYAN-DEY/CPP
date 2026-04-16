#include<bits/stdc++.h>

using namespace std;

bool checkInclusion(string s1, string s2){
    if(s1.length() > s2.length()){
        return false;
    }
    
    vector<int> s1Count(26, 0);
    vector<int> s2Count(26, 0);
    for (int i = 0; i < s1.length(); i++)
    {
        s1Count[s1[i] - 'a']++;
        s2Count[s2[i] - 'a']++;
    }

    int match = 0;
    for (int i = 0; i < 26; i++)
    {
        if(s1Count[i] == s2Count[i]){
            match++;
        }
    }

    int l = 0;
    for (int r = s1.length(); r < s2.length(); r++)
    {
        if(match == 26){
            return true;
        }

        int index = s2[r] - 'a';
        s2Count[index]++;
        if(s1Count[index] == s2Count[index]){
            match++;
        }
        else if(s1Count[index] + 1 == s2Count[index]){
            match--;
        }

        index = s2[l] - 'a';
        // If it was matching before decrementing, we lose a match
        if(s1Count[index] == s2Count[index]){
            match--;
        }
        // Remove character at index 'l'
        s2Count[index]--;
        // If it now matches after decrementing, we gain a match
        if(s1Count[index]  == s2Count[index]){
            match++;
        }
        l++;
    }
    
    return match == 26;
}

int main(){
    string s1 = "abc";
    string s2 = "lecabee";

    bool res = checkInclusion(s1, s2);
    if(res){
        cout << "True" << "\n";
    }
    else{
        cout << "False" << "\n";
    }

    return 0;
}