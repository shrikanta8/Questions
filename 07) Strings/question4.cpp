/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

**Example 1:**

**Input:** s = "Let's take LeetCode contest"

**Output:** "s'teL ekat edoCteeL tsetnoc"
*/


string func(string s) {
    int len = s.length();
    string ans="";
    string rev="";
    for(int i =0;i<=len;i++){
        
        if(i==len || s[i] ==' '){
            ans = ans+rev+" ";
            rev="";
        }
        else 
            rev = s[i]+rev;
    }
    ans.pop_back();
    return ans;
}
