class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i = 0, j = 0;
        int sum = 0;
        int n = mat.size();
        while(i < n && j < n){
            sum += mat[i][j];
            if(j != n-j-1)
                sum += mat[i][n-j-1];
            i++;
            j++;
        }

        return sum;
    }
};