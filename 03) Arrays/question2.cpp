/*
Question 2
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
           ● 0 <= a, b, c, d < n
           ● a, b, c, and d are distinct.
           ● nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.

Example 1:
Input: nums = [1,0,-1,0,-2,2], target = 0
*/


vector<vector<int>> func(vector<int>& nums, int target) {
    int n=nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        if(i && nums[i]==nums[i-1])
            continue;

        for(int j=i+1;j<n;j++){
            if(j!=i+1 && nums[j]==nums[j-1])
                continue;
            int st= j+1,en = n-1;
            long long val=(long long)target-nums[i]-nums[j];

            while(st<en){
                if(nums[st]+ nums[en] == val){
                    ans.push_back({nums[i],nums[j],nums[st],nums[en]});
                    st++;en--;
                    while(st<en && nums[st]==nums[st-1] ){
                        st++;
                    }
                    while(st<en && nums[en]==nums[en+1] ){
                        en--;
                    }
                }
                else if(nums[st]+ nums[en] > val){
                    en--;
                }
                else{
                    st++;
                }
            }
        }
    }
    return ans;
}
