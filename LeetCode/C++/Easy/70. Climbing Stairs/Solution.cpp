class Solution {
public:
    int climbStairs(int n) {
        return (pow(2, n) + 1)/ n;
    }
};