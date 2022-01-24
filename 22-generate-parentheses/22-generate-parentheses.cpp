class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        int open=n;
        int close=n;
        
        vector<string> ans;
        string temp="";
        solve(n,ans,open,close,temp);
        return ans;
    }
    
    void solve(int n , vector<string>&ans, int open, int close, string&temp){
        
        if(close == 0 && open == 0){
            ans.push_back(temp);
            return;
        }
        if(open!= 0){
            string t1 = temp + '(';
            solve(n,ans,open-1,close,t1);
        }
        if(close > open){
            string t2 = temp + ')';
            solve(n,ans,open,close -1,t2);
        }
    }
};