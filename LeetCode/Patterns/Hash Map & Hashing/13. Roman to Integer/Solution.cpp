class Solution {
public:
    int romanToInt(string s) {
        int num = 0, x, y = 0;
        for(int i = 0; i < s.length(); i++){
            switch(s[i]){
                case 'I':
                    x = 1;
                    break;
                case 'V':
                    x = 5;
                    break;
                case 'X':
                    x = 10;
                    break;
                case 'L':
                    x = 50;
                    break;
                case 'C':
                    x = 100;
                    break;
                case 'D':
                    x = 500;
                    break;
                case 'M':
                    x = 1000;
                    break;
            }

            if(y < x && y != 0){
                num -= 2*y;    
            }
            num += x;
            y = x;
        }

        return num;
    }
};