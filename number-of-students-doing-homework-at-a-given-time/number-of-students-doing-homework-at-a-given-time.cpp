class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        // maallllkkkeeeee ਇੱਥੇ ਕੀ ਦੇਖ ਰਹੇ ਹੋ? ਆਪਣਾ ਕੰਮ ਕਰੋ (ਲਾਵ ਜੂ)
        
        int ans = 0;
        for(int i = 0; i<startTime.size(); i++) {
            if(queryTime >= startTime[i] && queryTime <= endTime[i]) ans++;
        }
        return ans;
    }
};