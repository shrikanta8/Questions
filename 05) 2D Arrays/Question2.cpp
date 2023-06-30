/*
💡 You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase **may be** incomplete.

Given the integer n, return *the number of **complete rows** of the staircase you will build*.

**Example 1:**

**Input:** n = 5

**Output:** 2

**Explanation:** Because the 3rd row is incomplete, we return 2.

*/

int func(int n) {
    int s = 1,e=1e9;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(((long long)mid*(mid+1))/2 <= n){
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
    }
    return e;
}
