class Solution {
public:
    double average(vector<int>& salary) {
        int min = salary[0], max = salary[0];
        int sum = 0;
        for(int x : salary){
            sum += x;
            if(x > max)
                max = x;
            if(x < min)
                min = x;
        }

        return double(sum - max - min)/double(salary.size() - 2);
    }
};