#include<bits/stdc++.h>

using namespace std;
int binary_search(int l, int r, vector<int>& nums, int target){
    int mid = l + (r - l) / 2;
    if(l > r){
        return -1;
    }
    if (nums[mid] == target)
    {
        return mid;
    }
    else if (nums[mid] < target)
    {
        return binary_search(mid + 1, r, nums, target);
    }
    else{
        return binary_search(l, mid - 1, nums, target);
    }  
}

int main(){
    vector<int> nums = {-1,0,2,4,6,8};
    int target = 4;
    cout << "The index of target number is : " << binary_search(0, nums.size(), nums, target);

    return 0;
}