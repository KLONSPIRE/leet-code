class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = nums.size() - k; i < nums.size(); i++)
            ans.push_back(nums[i]);
        for(int i = 0; i < nums.size() - k; i++){
            ans.push_back(nums[i]);
            nums[i] = ans[i];
        }
        for(int i = nums.size() - k; i < nums.size(); i++)
            nums[i] = ans[i];
    }
};