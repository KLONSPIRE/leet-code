class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> hash;
        int i;
        for(i = 0; i < nums.size(); i++)
            hash[nums[i]]++;

        for(i = 0; i < nums.size(); i++)
            if(hash[i] == 0)
                break;

        return i;
    }
};