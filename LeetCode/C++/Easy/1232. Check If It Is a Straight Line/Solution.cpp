class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cd) {
        if(cd[1][0] - cd[0][0] != 0){

            float m = (cd[1][1] - cd[0][1])/(cd[1][0] - cd[0][0]);
            int c = cd[0][1] - m * cd[0][0];

            cout << m << endl << c;

            for(int i = 2; i < cd.size(); i++)
                if(cd[i][1] != m*cd[i][0] + c)
                    return false;
        }
        else
            for(int i = 2; i < cd.size(); i++)
                if(cd[i][0] != cd[0][0])
                    return false;
        return true;
    }
};