class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = false, dec = false;
        for(int i = 0; i < nums.size() - 1; i++){
            int j = i + 1;
            if(nums[i] > nums[j])
                dec = true;
            if(nums[i] < nums[j])
                inc = true;
            if(dec == true && inc == true)
                return false;
        }

        return true;
    }
};