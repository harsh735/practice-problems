class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.size() != goal.size()) return false;
        if(s == goal) return true;
        
        char temp;
        int j = s.size() - 1;
        for(int i = 0; i<s.size(); i++){
            //storing the last char in a temp variable
            temp = s[j];
            //deleting the last character
            s.pop_back();
            
            //inserting the last character at the beginning
            s.insert(s.begin(),temp);
            
            if(s == goal)
                return true;
        }
        return false;
        
        
        //OPTIMIZED: 
        // make temp string = s + s (concat)
        // use find function to see if goal exists if yes -> true : false;
    }
};