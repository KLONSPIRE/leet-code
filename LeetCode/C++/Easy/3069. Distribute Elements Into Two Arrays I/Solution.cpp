class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a, b;
        int i;
        for(i = 0; i < nums.size()-1; i++){
            if(i % 2 == 0)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
        }
        if(a.back() > b.back())
            a.push_back(nums[i]);
        else
            b.push_back(nums[i]);
        
        for(int i = 0; i < b.size(); i++)
            a.push_back(b[i]);
        
        return a;
    }
};