class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int i : nums)
            count[i]++;

        int i = 0;
        while(i < count[0]){
            nums[i] = 0;
            i++;
        }
        while(i < count[0] + count[1]){
            nums[i] = 1;
            i++;
        }
        while(i < count[0] + count[1] + count[2]){
            nums[i] = 2;
            i++;
        }
    }
};