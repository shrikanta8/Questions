/*
Given two strings s and goal, return true *if you can swap two letters in* s *so the result is equal to* goal*, otherwise, return* false*.*

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

- For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

**Example 1:**

**Input:** s = "ab", goal = "ba"

**Output:** true

**Explanation:** You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.
*/

bool func(string s, string goal) {
    int l1 = s.length(), l2= goal.length();
    if(l1 != l2 || (l1==1) )
        return false;
    vector<int> count(26);
    int ind1=-1,ind2=-1,chk=0;
    bool flag=false;

    for(int i=0;i<l1;i++){
        if(s[i] != goal[i]){
            chk++;
            if(chk > 2)
                return false;
            if(ind1 == -1){
                ind1=i;
            }
            else{
                ind2=i;
            }
        }
        else{
            count[s[i]-'a']++;
            if (count[s[i]-'a'] > 1){
                flag=true;
            }
        }
    }
    if( (chk==2 && ((s[ind1] == goal[ind2]) && (s[ind2] == goal[ind1]))) || (flag && !chk)  ){
        return true;
    }
    return false;
}
