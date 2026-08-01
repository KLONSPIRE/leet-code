class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n;
        for(int i = 0; i < nums.size(); i++)
            n[target-nums[i]] = i;
        for(int i = 0; i < nums.size(); i++)
            if(n.find(nums[i]) != n.end() && n[nums[i]] != i)
                return {i, n[nums[i]]};

        return {};
    }
};