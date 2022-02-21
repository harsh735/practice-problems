class Solution {
public:
    string frequencySort(string s) {
        //TC -> O(N)
        //SC -> O(N)
        
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>> pq;
        for(char i : s)
            mp[i]++;
    
        for(auto it : mp)
            pq.push({it.second,it.first});

        s.clear();
        while(!pq.empty()){
            int temp = pq.top().first;
            while(temp--) 
                s += pq.top().second;
            pq.pop();
        }
        return s;
    }
};