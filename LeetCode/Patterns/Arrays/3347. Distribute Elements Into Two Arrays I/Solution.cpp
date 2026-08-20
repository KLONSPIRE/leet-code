class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a, b;
        int i = 0;
        a.push_back(nums[i++]);
        b.push_back(nums[i++]);

        while(i < nums.size())
            if(a.back() > b.back())
            a.push_back(nums[i++]);
        else
            b.push_back(nums[i++]);
        
        for(int i : b)
            a.push_back(i);
        
        return a;
    }
};