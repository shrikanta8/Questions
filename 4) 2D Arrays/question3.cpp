/*
💡 Given a 2D integer array matrix, return *the **transpose** of* matrix.

The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

**Example 1:**

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

Output: [[1,4,7],[2,5,8],[3,6,9]]

*/


vector<vector<int>> func(vector<vector<int>>& matrix) {
    int r = matrix.size(),c=matrix[0].size();
    vector<vector<int>> ans(c,vector<int>(r));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}
