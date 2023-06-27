/*
You are given an inclusive range [lower, upper] and a sorted unique integer array nums, where all elements are within the inclusive range.

A number x is considered missing if x is in the range [lower, upper] and x is not in nums.

Return the shortest sorted list of ranges that exactly covers all the missing numbers. That is, no element of nums is included in any of the ranges, and each missing number is covered by one of the ranges.

Example 1:
Input: nums = [0,1,3,50,75], lower = 0, upper = 99
Output: [[2,2],[4,49],[51,74],[76,99]]

Explanation: The ranges are:
[2,2]
[4,49]
[51,74]
[76,99]
*/




vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    int i=0,n=nums.size(),st;
    while(i<n){
        st =nums[i];
        while(i+1<n && nums[i] + 1 == nums[i+1]){
            i++;
        }
        if(st == nums[i]){
            ans.push_back(to_string(st));
        }
        else{
            ans.push_back(to_string(st)+"->"+to_string(nums[i]));
        }
        i++;
    }
    return ans;
}
