class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size() / 2; i++)
            swap(nums[i], nums[nums.size() - i - 1]);

        cout << endl;
        for(int i = 0; i < nums.size(); i++)
            cout << nums[i] << " ";
        
        for(int i = 0; i < (k % nums.size()) / 2; i++)
            swap(nums[i], nums[k % nums.size() - i - 1]);

        cout << endl;
        for(int i = 0; i < nums.size(); i++)
            cout << nums[i] << " ";

        int beg = k % nums.size(), end = nums.size() - 1;
        while(beg < end){
            swap(nums[beg], nums[end]);
            beg++;
            end--;
        }
    }
};