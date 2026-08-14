class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        int low = arr[0], high = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < low)
                low = arr[i];
            if(arr[i] > high)
                high = arr[i];
        }

        if((high - low)%(arr.size()-1) != 0)
            return false;

        int d = (high - low)/(arr.size()-1);
        if(d==0)
            return true;
        
        for(int i = 0; i < arr.size(); i++)
            if((arr[i] - low) % d != 0)
                return false;

        return true;
    }
};