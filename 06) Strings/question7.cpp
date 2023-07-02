/*
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

**Example 1:**

**Input:** n = 3

**Output:** [[1,2,3],[8,9,4],[7,6,5]]
*/

vector<vector<int>> func(int n) {
    int rs=0,re=n-1,cs=0,ce=n-1,val=1;
    vector<vector<int> > arr(n,vector<int>(n));

    while(rs<=re && cs<=ce){
        for(int j=cs;j<=ce && rs<=re;j++){
            arr[rs][j]=val++;
        }
        rs++;

        for(int i=rs;i<=re && cs<=ce;i++){
            arr[i][ce] = val++;
        }
        ce--;

        for(int j=ce;j>=cs && rs<=re;j--){
            arr[re][j] = val++;
        }
        re--;

        for(int i=re;i>=rs&& cs<=ce;i--){
            arr[i][cs] = val++;
        }
        cs++;
    }
    return arr;
}
