class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int i;
        for(i = 0; i < nums.size(); i++)
            hash[nums[i]]++;

        for(i = 0; i < nums.size(); i++)
            if(hash[nums[i]] > nums.size()/2)
                break;
        return nums[i];
    }
};