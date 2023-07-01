/*
You are given an m x n integer matrix matrix with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true *if* target *is in* matrix *or* false *otherwise*.

You must write a solution in O(log(m * n)) time complexity.
  */

bool func(vector<vector<int>>& matrix, int target) {
        
    int r = matrix.size(),c= matrix[0].size(),i=0,j=c-1;
    while(i<r && j>=0){
        if(matrix[i][j] == target) 
            return true;
        if(matrix[i][j] > target) 
            j--;
        else
            i++;
    }
    return false;
}
