/*
💡 **Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

**Example 1:**
Input: nums = [1,2,2,4]
Output: [2,3]
*/


vector<int> func(vector<int>& arr) {
    int xorVal=arr[0],n=arr.size();
    
    for(int i=1;i<n;i++){
        xorVal = xorVal^ arr[i];
     }
     
    for(int i=1;i<=n;i++){
        xorVal = xorVal^ (i);
    }
    
    //in xorVal = xor of duplicate and missing numbers
    //we are segregating all numbers on the basis of the set bit and non set bit
    
    int x=0,y=0,rightSetBit;
    rightSetBit = xorVal & ~(xorVal-1);
    
    for(int i=0;i<n;i++){
        if(rightSetBit & arr[i])
            x=x^ arr[i];
        else
            y=y ^ arr[i];
        
    }
    
    //xoring again from 1 to n 
    for(int i=1;i<=n;i++){
        if(rightSetBit & i )
            x=x^ i;
        else
            y=y ^ i;
    }
    //to check which is duplicate and which is missing => traverse the array and find 
    bool flag = 0;
    vector<int> ans(2);
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            ans[0]=x;
            flag=1;
            break;
        }
    }
    if(flag)
        ans[1]=y;
    else{
        ans[0]=y;
        ans[1]=x;
    }
    return ans;
}
