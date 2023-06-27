/*
💡 Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

**Example 1:**

Input: nums = [-4,-1,0,3,10]

Output: [0,1,9,16,100]

**Explanation:** After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100]

*/

vector<int> func(vector<int>& nums) {
    int n = nums.size(),st=0,en = n-1;
    vector<int> ans(n);

    for(int i=n-1;i>=0;i--){
        if(nums[st]*nums[st] > nums[en]*nums[en]){
            ans[i] = nums[st]*nums[st];
            st++;
        }
        else{
            ans[i] = nums[en]*nums[en];
            en--;
        }
    }
    return ans;
}
