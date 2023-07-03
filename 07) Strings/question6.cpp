/*
Given two strings s and goal, return true *if and only if* s *can become* goal *after some number of **shifts** on* s.

A **shift** on s consists of moving the leftmost character of s to the rightmost position.

- For example, if s = "abcde", then it will be "bcdea" after one shift.

**Example 1:**

**Input:** s = "abcde", goal = "cdeab"

**Output:**

true
*/

bool func(string s, string goal) {
    int l1=s.length(), l2=goal.length();
    if(l1 != l2){
        return false;
    }
    for(int i=0;i<l1;i++){
        if( (s.substr(i) + s.substr(0,i)) == goal )
            return true;
    }
    return false;
}
