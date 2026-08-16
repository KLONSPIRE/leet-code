class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int i : nums)
            count[i]++;

        int i;
        for(i = 0; i < count[0]; i++)
            nums[i] = 0;
        for(i = count[0]; i < count[0] + count[1]; i++)
            nums[i] = 1;
        for(i = count[0] + count[1]; i < count[0] + count[1] + count[2]; i++)
            nums[i] = 2;
    }
};