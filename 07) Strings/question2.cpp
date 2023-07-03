/*
Given a string num which represents an integer, return true *if* num *is a **strobogrammatic number***.

A **strobogrammatic number** is a number that looks the same when rotated 180 degrees (looked at upside down).

**Example 1:**

**Input:** num = "69"

**Output:**

true
*/

bool func(string num) {
    unordered_map<char,char> mp;
    mp['0']='0';
    mp['1']='1';
    mp['8']='8';
    mp['6']='9';
    mp['9']='6';
    int st = 0, en = num.length()-1;
    while(st<=en){
        if(mp.find(num[st]) != mp.end()){
            if(mp[num[st]] != num[en]){
                return false;
            }
            st++;
            en--;
        }
    }
    return true;
}
