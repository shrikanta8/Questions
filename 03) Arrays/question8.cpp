/*
Given an array of meeting time intervals where intervals[i] = [starti, endi], determine if a person could attend all meetings.

Example 1:
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false
*/



bool func(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    int n = intervals.size();
    for(int i=1;i<n;i++){
        if(intervals[i][0] < intervals[i-1][1]){
            return false;
        }
    }
    return true;
}
