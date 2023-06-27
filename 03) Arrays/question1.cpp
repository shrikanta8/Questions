/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to the target.
Return the sum of the three integers.

You may assume that each input would have exactly one solution.

Example 1:
Input: nums = [-1,2,1,-4], target = 1
Output: 2

Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/


int func(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    
    int n =nums.size();
    int sum = nums[0] + nums[1] + nums[n-1],diff = abs(sum-target);
    int fans =sum;
    for(int i=0; i<n-2; i++ ){
        if(!i || nums[i] != nums[i-1]){
            int s=i+1,e =n-1;
        
            while(s<e){
                sum = nums[i] + nums[s] + nums[e];
                if(sum == target)
                    return target;
                if(abs(sum-target) < diff){
                    fans = sum;
                    diff = abs(sum-target);
                }
                if( sum > target)
                    e--;
                else
                    s++;
            }
        }
    }
    return fans;
}
