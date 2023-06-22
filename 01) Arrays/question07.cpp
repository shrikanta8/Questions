/*
💡 Q7. Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.
Note that you must do this in-place without making a copy of the array.

**Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

void func(vector<int>& nums) {
    int n = nums.size(),j=0;
    for(int i=0;i<n;i++){
        if(nums[i] != 0){
            nums[j] = nums[i];
            if(i != j)
                nums[i] =0;
            j++;
        }
    }
}
