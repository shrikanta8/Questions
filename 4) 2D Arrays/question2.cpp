/*
Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

- answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
- answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

**Note** that the integers in the lists may be returned in **any** order.

**Example 1:**

**Input:** nums1 = [1,2,3], nums2 = [2,4,6]

**Output:** [[1,3],[4,6]]

**Explanation:**

For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].
*/

vector<vector<int>> func(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int> > ans(2,vector<int>());
    unordered_map<int,bool> m1,m2;
    for(int i=0;i<nums1.size();i++){
        m1[nums1[i]]=1;
    }
    for(int i=0;i<nums2.size();i++){
        m2[nums2[i]]=1;
    }
    for(auto [ele,c]: m1){
        if(m2.find(ele)==m2.end()){
            ans[0].push_back(ele);
        }
    }
    for(auto [ele,c]:m2){
        if(m1.find(ele)==m1.end()){
            ans[1].push_back(ele);
        }
    }
    return ans;
}
