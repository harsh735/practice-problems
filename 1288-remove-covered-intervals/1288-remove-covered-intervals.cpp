class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        if(n == 0) return 0;
        sort(intervals.begin(),intervals.end());
        
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        int ans = 1;
        
        for(int i = 1; i<n; i++){
            if(intervals[i][1] > end && intervals[i][0] > start){
                ans++;        
            }
            
            if(intervals[i][1] > end){
                start = intervals[i][0];
                end = intervals [i][1];
            }
        }
        return ans;
    }
};