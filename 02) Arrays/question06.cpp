/*
Question 6
Given an array of integers nums which is sorted in ascending order, and an integer target,
write a function to search target in nums. If target exists, then return its index. Otherwise,
return -1.

You must write an algorithm with O(log n) runtime complexity.

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4

Explanation: 9 exists in nums and its index is 4
*/


int func(vector<int>& nums, int target) {
    int st=0,en=nums.size()-1;
    while(st<=en){
        int mid = (st+en)/2;
        if(target == nums[mid]){
            return mid;
        }
        if(nums[mid] < target){
            st = mid+1;
        }
        else{
            en = mid-1;
        } 
    }
    return -1;
}
