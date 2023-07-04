 bool func(vector<vector<int>>& coordinates) {
        
    int n= coordinates.size();
    for(int i=2;i<n;i++){
        int val1 = (coordinates[i-1][1] - coordinates[i-2][1]) * (coordinates[i][0] - coordinates[i-2][0]);
        int val2 = (coordinates[i][1] - coordinates[i-2][1]) * (coordinates[i-1][0] - coordinates[i-2][0]);
        if(val1 != val2){
            return false;
        }
    }
    return true;
}
