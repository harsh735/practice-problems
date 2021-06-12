class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i, min = 1000000;
        int n = strs.size();
        
        if(n == 1){
            return strs[0];
        }
        if(n == 0){
            return "";
        }
        
        for(i=0; i<n; i++)
        {
            int size = strs[i].size();  //storing size of our ith word
            if(size < min)
            {
                min = size;  //the smallest word will become min
            }
        }
        
        string result = "";
        for(i=0; i<min; i++)
        {
            char c = strs[0][i];  //comparing the letters of first word;
            for(int j = 1; j<n; j++)
            {
                if(c!= strs[j][i])
                    return result;
            }
            result += c;
        }
        return result;
    }
};