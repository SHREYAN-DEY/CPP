#include<bits/stdc++.h>

using namespace std;

// int characterReplacement(string s, int k) {
//     int res = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         unordered_map<char, int> count;
//         int maxf = 0;
//         for (int j = i; j < s.length(); j++)
//         {
//             count[s[j]]++;
//             maxf = max(maxf, count[s[j]]);
//             if((j - i + 1) - maxf <= k){
//                 res = max(res, j - i + 1);
//             }
//         } 
//     }
//     return res; 
// }

// sliding window - 1
int characterReplacement(string s, int k){
   int res = 0;
   unordered_set<char> charSet(s.begin(), s.end());

   for(char c : charSet){
        int count = 0, l = 0;
        for (int r = 0; r < s.size(); r++)
        {
            if(s[r] == c){
                count++;
            }

            while((r - l + 1) - count > k){
                if(s[l] == c){
                    count--;
                }
                l++;
            }

            res = max(res, r - l + 1);
        }
   }
   return res;
}

// sliding window - 2
// int characterReplacement(string s, int k) {
//     vector<int> counts(26, 0); // Use a vector for faster access than a map
//     int maxCount = 0; // Frequency of the most common character in the current window
//     int l = 0;
//     int res = 0;

//     for (int r = 0; r < s.size(); r++) {
//         // 1. Add the new character to the window
//         counts[s[r] - 'A']++;
        
//         // 2. Update the max frequency found so far
//         maxCount = max(maxCount, counts[s[r] - 'A']);

//         // 3. Check if the window is valid:
//         // (Window Size - Most Frequent Char Count) > k
//         // If this is true, we have too many "other" characters to replace.
//         while ((r - l + 1) - maxCount > k) {
//             counts[s[l] - 'A']--;
//             l++; // Shrink from the left
//         }

//         // 4. Update the result
//         res = max(res, r - l + 1);
//     }
//     return res;
// }


int main(){
    string s = "AAABABB";
    int k = 1;
    int res = characterReplacement(s, k);
    cout << "output : " << res << endl;
    
    return 0;
}