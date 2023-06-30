/*
Given two integer arrays arr1 and arr2, and the integer d, *return the distance value between the two arrays*.

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

**Example 1:**

**Input:** arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2

**Output:** 2

**Explanation:**

For arr1[0]=4 we have:

|4-10|=6 > d=2

|4-9|=5 > d=2

|4-1|=3 > d=2

|4-8|=4 > d=2

For arr1[1]=5 we have:

|5-10|=5 > d=2

|5-9|=4 > d=2

|5-1|=4 > d=2

|5-8|=3 > d=2

For arr1[2]=8 we have:

**|8-10|=2 <= d=2**

**|8-9|=1 <= d=2**

|8-1|=7 > d=2

**|8-8|=0 <= d=2
*/


bool checkVal(vector<int>& arr2, int le, int ri, int end){
    int st=0;
    while(st<=end){
        int mid = st+ (end-st)/2;
        if(arr2[mid]>= le && arr2[mid]<=ri){
            return false;
        }
        if(arr2[mid] < le){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return true;
}

//code strts here
int func(vector<int>& arr1, vector<int>& arr2, int d) {
    sort(arr2.begin(),arr2.end());
    int ans=0,n=arr2.size();
    for(auto ele: arr1){
        if(checkVal(arr2,ele-d,ele+d,n-1)){
            ans++;
        }
    }
    return ans;
}
