class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        set <int> maxElements;
        for(auto element : nums)
        {
            maxElements.insert(element);
            if(maxElements.size() > 3)
                maxElements.erase(maxElements.begin());
        }
        if(maxElements.size() == 3)
            return *maxElements.begin();
        return *prev(maxElements.end());
    }
};