/*
Question 4
You have a long flowerbed in which some of the plots are planted, and some are not.
However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
  */


bool func(vector<int>& flowerbed, int n) {
    int sz = flowerbed.size();

    for(int i=0;i<sz && n>0;i++){
        if(flowerbed[i] == 0){
            int prev = (i==0)?0:flowerbed[i-1];
            int next = (i == sz-1)?0:flowerbed[i+1];
            if( !prev && !next ){
                flowerbed[i]=1;
                n--;
            }
        }
    }
    return n<=0;
}
