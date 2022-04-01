class Solution {
public:
    
    void revString(vector<char>&s, int start, int end){
        
        if(start > end){
            return;
        }
        //storing current letter in a temp char
        char temp = s[start];
        s[start] = s[end]; //storing last letter in first pos
        s[end] = temp; //storing first letter in last pos
        revString(s, start+1, end-1); //recursive call
    
    }
    
    
    void reverseString(vector<char>& s) {
        revString(s,0,s.size() - 1);
    }
};