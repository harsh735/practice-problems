class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size() > s2.size()) return false;
        
        vector<int> str1(26,0),str2(26,0);
        int left = 0; 
        int right = 0;
        while(right < s1.size()){
            str1[s1[right]-'a']++;
            str2[s2[right]-'a']++;
            right++;
        }
        
        right--;
        while(right < s2.size()){
            
            if(str1 == str2) 
                return true;
            right++;
            
            if(right != s2.size())
                str2[s2[right]-'a']++;
            
            str2[s2[left] - 'a']--;
            left++;  
        }
        return false;
    }
};