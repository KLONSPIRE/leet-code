class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        for(int i = 0; i < nums.size() / 2; i++){
            nums[i] = nums[i] + nums[nums.size() - i - 1];
            nums[nums.size() - i - 1] = nums[i] - nums[nums.size() - i - 1];
            nums[i] = nums[i] - nums[nums.size() - i - 1];
        }
        
        for(int i = 0; i < k / 2; i++){
            nums[i] = nums[i] + nums[k - i - 1];
            nums[k - i - 1] = nums[i] - nums[k - i - 1];
            nums[i] = nums[i] - nums[k - i - 1];
        }

        int beg = k, end = nums.size() - 1;
        while(beg < end){
            nums[beg] = nums[beg] + nums[end];
            nums[end] = nums[beg] - nums[end];
            nums[beg] = nums[beg] - nums[end];
            beg++;
            end--;
        }
    }
};