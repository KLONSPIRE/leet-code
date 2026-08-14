class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        long long sum = arr[0];
        int low = arr[0], high = arr[0];

        for(int i = 1; i < arr.size(); i++){
            low = min(low, arr[i]);
            high = max(high, arr[i]);
            sum += arr[i];
        }

        int n = (int)arr.size();

        if((high - low) % (n - 1) != 0)
            return false;

        int d = (high - low) / (n - 1);

        if(d == 0)
            return true;

        if(sum != 1LL * n * (low + high) / 2)
            return false;

        unordered_set<int> seen;

        for(int x : arr) {
            if((x - low) % d != 0)
                return false;

            if(!seen.insert(x).second)
                return false;
        }

        return true;
    }
};