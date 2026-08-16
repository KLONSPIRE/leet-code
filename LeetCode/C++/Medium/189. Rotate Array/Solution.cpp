class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i = 0; i < k; i++)
            for(int j = 0; j < nums.size() - 1; j++)
                swap(nums[nums.size() - 1], nums[j]);
    }
};