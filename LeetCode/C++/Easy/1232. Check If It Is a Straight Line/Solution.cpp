class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cd) {
        float m = (cd[1][1] - cd[0][1])/(cd[1][1] - cd[0][1]);
        int c = cd[0][1] - m * cd[0][0];
        for(int i = 2; i < cd.size(); i++)
            if(cd[i][1] != m*cd[i][0] + c)
                return false;

        return true;
    }
};