/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears **once** or **twice**, return *an array of all the integers that appears **twice***.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

**Example 1:**

**Input:** nums = [4,3,2,7,8,2,3,1]

**Output:**

[2,3]
*/

vector<int> func(vector<int>& nums) {
    vector<int> arr;
    int i=0,n=nums.size();
    while(i < n){
        if(nums[i] != nums[nums[i]-1])
            swap(nums[i],nums[nums[i]-1]);
        else
            i++;
    }
    for(int j=0;j<n;j++){
        if(nums[j] != j+1)
            arr.push_back(nums[j]);
    }
    return arr;
}
