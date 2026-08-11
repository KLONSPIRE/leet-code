class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> n;
        vector<int> ans;
        int i;
        for(i = 0; i < nums.size(); i++){
                n[nums[i]]++;            }

        for(i = 1; i <= nums.size(); i++)
            if(n[i] == 0){
                ans.push_back(i);
            }
        
        return ans;
    }
};