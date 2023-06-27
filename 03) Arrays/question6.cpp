/*
Given a non-empty array of integers nums, every element appears twice exceptfor one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1
*/

int singleNumber(vector<int>& nums) {
    int ans= 0;
    for(auto ele:nums){
        ans ^= ele;
    }
    return ans;
}
