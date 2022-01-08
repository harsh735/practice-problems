class Solution {
public:
    string decodeString(string s) {
        
        int curNum = 0;
        int prevNum;
        string curString = "";
        string prevString = "";
        
        stack<int> numStack;
        stack<string> stringStack;
        
        for(int i = 0; i<s.size(); i++) {
            
            if(isdigit(s[i])) curNum = curNum*10 + (s[i] - '0');
            if(isalpha(s[i])) curString += s[i];
            
            if(s[i] == '['){
                numStack.push(curNum);
                stringStack.push(curString);
                curNum = 0;
                curString = "";
            }
            
            if(s[i] == ']'){
                prevNum = numStack.top();
                numStack.pop();
                prevString = stringStack.top();
                stringStack.pop();
            
                while(prevNum--)
                    prevString += curString;
                
                curString = prevString;
            }
        }
        return curString;
    }
};