/*
Given two [sparse matrices](https://en.wikipedia.org/wiki/Sparse_matrix) mat1 of size m x k and mat2 of size k x n, return the result of mat1 x mat2. You may assume that multiplication is always possible.

**Example 1:**
**Input:** mat1 = [[1,0,0],[-1,0,3]], mat2 = [[7,0,0],[0,0,0],[0,0,1]]

**Output:**

[[7,0,0],[-7,0,3]]

*/


vector<vector<int>> func(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
{
    int m = mat1.size(), k = mat2.size(), n=mat2[0].size(),val=0;
    vector<vector<int>> ans(m,vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            val=0;
            for(int x=0;x<k;x++){
                val += mat1[i][x]*mat2[x][j]; 
            }
            ans[i][j]=val;
        }
    }
    return ans;
}
