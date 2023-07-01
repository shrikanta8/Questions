/*
Given a binary array nums, return *the maximum length of a contiguous subarray with an equal number of* 0 *and* 1.

**Example 1:**

**Input:** nums = [0,1]

**Output:** 2

**Explanation:**

[0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
*/

int func(vector<int>& nums) {
    unordered_map<int,int> mp;
    int n =nums.size(),c=0,ans=0;
    mp[0] = -1;
    for(int i=0;i<n;i++){
        if(nums[i]){
            c++;
        }
        else{
            c--;
        }
        if(mp.find(c) != mp.end()){
            ans = max(ans, i-mp[c]);
        }
        else{
            mp[c] = i;
        }
    }
    return ans;

}
