class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
                
        set<int> s;
        s.insert(nums.begin(),nums.end());
        int deviation = (*s.rbegin() - *s.begin());
        int val = *s.begin();
        
        while(val % 2 == 1){
            s.erase(val);
            s.insert(2*val);
            val = *s.begin();
            deviation = min(deviation,*s.rbegin() - val);
        }
        val = *s.rbegin();
        while(val % 2 == 0){
            s.erase(val);
            s.insert(val/2);
            val = *s.rbegin();
            deviation = min(deviation,val - *s.begin());
        }
        
        return deviation;
    }
};