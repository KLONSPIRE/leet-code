class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg = 0;
        int end = nums.size()-1;
        int mid;

        while(beg <= end){
            mid = beg + (end - beg)/2;
            if(target == nums[mid])
                return mid;
            else if(target > nums[mid])
                beg = mid+1;
            else
                end = mid-1;
            cout << mid << endl;
        }

        return beg;
    }
};