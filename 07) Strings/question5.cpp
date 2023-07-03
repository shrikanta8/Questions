/*
Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.

**Example 1:**

**Input:** s = "abcdefg", k = 2

**Output:**

"bacdfeg"
*/

string func(string s, int k) {
    int n=s.length(),i=0,en,st;

    while(i<n){
        st=i;
        en = min(i+k-1,n-1);
        while(st<en){
            swap(s[st++],s[en--]);
        }
        i+=2*k;
    }
    return s;
}
