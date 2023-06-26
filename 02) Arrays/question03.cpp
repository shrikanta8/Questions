/*
Question 3
We define a harmonious array as an array where the difference between its maximum value
and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence
among all its possible subsequences.

A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

Example 1:
Input: nums = [1,3,2,2,5,2,3,7]
Output: 5

Explanation: The longest harmonious subsequence is [3,2,2,2,3].
*/


int func(vector<int>& nums) {
    int ans=0;
    unordered_map<int,int> mp;
    for(auto ele:nums){
        mp[ele]++;
    }
    for(auto ele:nums){
        if(mp.find(ele-1) != mp.end()){
            ans = max(ans, mp[ele] + mp[ele-1]);
        }
    }
    return ans;
}
