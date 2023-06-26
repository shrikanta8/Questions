/*
Question 7
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example 1:
Input: nums = [1,2,2,3]
Output: true
*/

bool func(vector<int>& nums) {
    int n = nums.size(), flag = -1,i=1;

    while(i<n){
        while(i<n &&( nums[i] == nums[i-1])){
            i++;
        }
        if(i>=n){
            break;
        }
        if(flag == -1){
            if(nums[i] - nums[i-1] > 0){
                flag=1;
            }
            else{
                flag=0;
            }
        }
        else if(flag==1){
            if(nums[i] - nums[i-1] < 0)
                return false;
        }
        else{
            if(nums[i] - nums[i-1] > 0)
                return false;
        }
        i++;
    }

    return true;
}





//other way
bool func(vector<int>& nums) {
    int n = nums.size();
    bool inc = false,dec= false;

    for(int i=1;i<n;i++){
        if(nums[i]-nums[i-1] > 0 ){
            inc = true;
        }
        if(nums[i]-nums[i-1] < 0){
            dec = true;
        }
        if(inc && dec){
            //both condition can't be true at a time
            return false;
        }
    }
    return true;
}
