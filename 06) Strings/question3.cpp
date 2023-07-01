/*
Given an array of integers arr, return *true if and only if it is a valid mountain array*.

Recall that arr is a mountain array if and only if:

- arr.length >= 3
- There exists some i with 0 < i < arr.length - 1 such that:
    - arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
    - arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

**Example 1:**

**Input:** arr = [2,1]

**Output:**

false
*/


bool func(vector<int>& arr) {
    int n = arr.size(),i=0;
    if(n<3)
        return false;
    while(i+1<n){
        if(arr[i] == arr[i+1]){
            return false;
        }
        if(arr[i] > arr[i+1])
            break;
        i++;
    }
    if((i == n-1) || (i==0))
        return false;
    i++;
    while(i+1<n){
        if(arr[i]<=arr[i+1])
            return false;
        i++;
    }
    return true;
}
