class Solution {
public:
    int calPoints(vector<string>& ops) {
        int ans = 0;
        vector<int> res;
        
        for(int i = 0; i<ops.size(); i++){
            int size = res.size();
            if(ops[i] == "+"){
                res.push_back(res[size-1] + res[size-2]);
            }
            else if(ops[i] == "C"){
                res.pop_back();
            }
            else if(ops[i] == "D"){
                res.push_back(res[size-1] * 2);
            }
            else
                res.push_back(stoi(ops[i]));
        }
        
        return ans = accumulate(res.begin(),res.end(), 0);
    }
};