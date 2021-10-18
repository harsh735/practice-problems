class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        // SPENT AN HOUR ON THIS HATE THIS BUT YA 
        
        vector<int> memo(366,-1);
        return solve(days,costs,0,memo);
    }
    
    int solve(vector<int>&days , vector<int>&costs, int currIdx,vector<int>&memo) {
        unordered_map<int,int> ans;
        for(int i=0;i<days.size();i++) ans[days[i]]++;

        if(currIdx > 365) return 0;
        int currentKey = currIdx;
        
        if(memo[currentKey] != -1) return memo[currentKey];
        else if(ans.find(currentKey) != ans.end()){
            return memo[currentKey] = min(costs[0] + solve(days,costs,currIdx + 1,memo),
                                          min(costs[1] + solve(days,costs,currIdx + 7,memo),
                                              costs[2] + solve(days,costs,currIdx + 30,memo)));
        }
        else return memo[currentKey] = solve(days,costs,currIdx + 1,memo);
    }
};