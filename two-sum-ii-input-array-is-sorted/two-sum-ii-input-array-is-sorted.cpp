class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int i = 0, j = numbers.size()-1;
        while(i<j)
        {
            int sum = numbers[i] + numbers[j];
            if(sum == target) 
            {
                v[0] = i+1;
                v[1] = j+1;
            }
            if(sum >target)
            {
                j--;
            }
            if(sum < target)
            {
                i++;
            }
        }
        return v;
    }
};
