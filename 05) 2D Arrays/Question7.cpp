/*
Suppose an array of length n sorted in ascending order is **rotated** between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

- [4,5,6,7,0,1,2] if it was rotated 4 times.
- [0,1,2,4,5,6,7] if it was rotated 7 times.

Notice that **rotating** an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of **unique** elements, return *the minimum element of this array*.

You must write an algorithm that runs in O(log n) time.

**Example 1:**

**Input:** nums = [3,4,5,1,2]

**Output:** 1

**Explanation:**

The original array was [1,2,3,4,5] rotated 3 times.
*/

int findMin(vector<int>& nums) {
    int pivot = findPivot(nums);
    if(pivot == -1)
        return nums[0];
    else
        return nums[pivot+1];
}

//code starts here
int func(vector<int>& nums){
    int s = 0,e=nums.size()-1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(mid < e && nums[mid] > nums[mid+1])
            return mid;
        if(s < mid && nums[mid - 1] > nums[mid])
            return mid-1;
        
        if(nums[mid] > nums[s])
            s = mid;
        else
            e = mid - 1;
    }
    return -1;
}
