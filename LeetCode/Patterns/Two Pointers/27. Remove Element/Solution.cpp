class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos = 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] != val){
                if(i != pos)
                    swap(nums[i], nums[pos]);
                pos++;
            }

        for(int i = pos; i < nums.size(); i++)
            nums.pop_back();

        return pos;
    }
};