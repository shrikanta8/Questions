/*
A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

- s[i] == 'I' if perm[i] < perm[i + 1], and
- s[i] == 'D' if perm[i] > perm[i + 1].

Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return **any of them**.

**Example 1:**

**Input:** s = "IDID"

**Output:**

[0,4,1,3,2]
  */


vector<int> func(string s) {
    int n=s.length(),e=n,st=0;

    vector<int> ans;
    for(int i=0;i<n;i++){
        if(s[i] == 'I'){
            ans.push_back(st++);
        }
        else{
            ans.push_back(e--);
        }
    }
    ans.push_back((s[n-1]=='I')?st:e);

    return ans;
}

