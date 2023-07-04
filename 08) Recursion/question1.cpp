/*
Given two strings s1 and s2, return *the lowest **ASCII** sum of deleted characters to make two strings equal*.

**Example 1:**

**Input:** s1 = "sea", s2 = "eat"

**Output:** 231

**Explanation:** Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum.

Deleting "t" from "eat" adds 116 to the sum.

At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this.
  */

int func(string s1, string s2) {
    int l1=s1.length(), l2= s2.length();
    vector<vector<int> > dp(l1+1, vector<int>(l2+1));
    for(int i=1;i<=l1;i++){
        dp[i][0] = s1[i-1] + dp[i-1][0];
    }
    for(int i=1;i<=l2;i++){
        dp[0][i] = s2[i-1] + dp[0][i-1];
    }
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                int takeFirst = s1[i-1] + dp[i-1][j];
                int takeSecond = s2[j-1] + dp[i][j-1]; 
                dp[i][j] = min(takeFirst, takeSecond);
            }
        }
    }
    return dp[l1][l2];
}
