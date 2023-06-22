/*
💡 **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

**Example 1:**
Input: nums = [1,2,3,1]

Output: true
  */


bool func(vector<int>& nums) {
    unordered_map<int,bool> mp;
    for(auto ele:nums){
        if(mp.find(ele) != mp.end())
            return true;
        mp[ele]=1;
    }
    return false;
}
