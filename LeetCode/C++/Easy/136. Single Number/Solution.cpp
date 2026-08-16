class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        int i;
        for( i = 1; i < nums.size() - 1; i = i + 2)
            if(nums[i] != nums[i-1])
                break;

        if(nums[i] != nums[i+1])
            return nums[i];
        return nums[i-1];
    }
};