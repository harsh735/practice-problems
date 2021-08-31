class Solution {
public:
    bool checkIfPangram(string sentence) {
     
        unordered_map<char, int> ans;
        int count = 0;
        for(int i = 0; i<sentence.length(); i++){
            ans[sentence[i]]++;
        }
        
        for(auto it:ans){
            if(it.first >= 97 && it.first <= 122){
                count +=1;
            }
        }
        return count == 26 ? true : false;
    }
};