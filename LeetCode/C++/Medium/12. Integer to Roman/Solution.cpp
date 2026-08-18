class Solution {
public:
    string intToRoman(int num) {
        int pos = 1000;
        string str="";
        while(num > 0){
            int r = num / pos;
            if(pos == 1)
                switch(r){
                    case 1: 
                        str.push_back('I');
                        break;
                    case 2: 
                        str.push_back('I');
                        str.push_back('I');
                        break;
                    case 3: 
                        str.push_back('I');
                        str.push_back('I');
                        str.push_back('I');
                        break;
                    case 4: 
                        str.push_back('I');
                        str.push_back('V');
                        break;
                    case 5:
                        str.push_back('V');
                        break;
                    case 6:
                        str.push_back('V');
                        str.push_back('I');
                        break;
                    case 7:
                        str.push_back('V');
                        str.push_back('I');
                        str.push_back('I');
                        break;
                    case 8:
                        str.push_back('V');
                        str.push_back('I');
                        str.push_back('I');
                        str.push_back('I');
                        break;
                    case 9:
                        str.push_back('I');
                        str.push_back('X');
                        break;
                }
            if(pos == 10)
                switch(r){
                    case 1: 
                        str.push_back('X');
                        break;
                    case 2: 
                        str.push_back('X');
                        str.push_back('X');
                        break;
                    case 3: 
                        str.push_back('X');
                        str.push_back('X');
                        str.push_back('X');
                        break;
                    case 4: 
                        str.push_back('X');
                        str.push_back('L');
                        break;
                    case 5:
                        str.push_back('L');
                        break;
                    case 6:
                        str.push_back('L');
                        str.push_back('X');
                        break;
                    case 7:
                        str.push_back('L');
                        str.push_back('X');
                        str.push_back('X');
                        break;
                    case 8:
                        str.push_back('L');
                        str.push_back('X');
                        str.push_back('X');
                        str.push_back('X');
                        break;
                    case 9:
                        str.push_back('X');
                        str.push_back('C');
                        break;
                }
            if(pos == 100)
                switch(r){
                    case 1: 
                        str.push_back('C');
                        break;
                    case 2: 
                        str.push_back('C');
                        str.push_back('C');
                        break;
                    case 3: 
                        str.push_back('C');
                        str.push_back('C');
                        str.push_back('C');
                        break;
                    case 4: 
                        str.push_back('C');
                        str.push_back('D');
                        break;
                    case 5:
                        str.push_back('D');
                        break;
                    case 6:
                        str.push_back('D');
                        str.push_back('C');
                        break;
                    case 7:
                        str.push_back('D');
                        str.push_back('C');
                        str.push_back('C');
                        break;
                    case 8:
                        str.push_back('D');
                        str.push_back('C');
                        str.push_back('C');
                        str.push_back('C');
                        break;
                    case 9:
                        str.push_back('C');
                        str.push_back('M');
                        break;
                }
            if(pos == 1000)
                switch(r){
                    case 1: 
                        str.push_back('M');
                        break;
                    case 2: 
                        str.push_back('M');
                        str.push_back('M');
                        break;
                    case 3: 
                        str.push_back('M');
                        str.push_back('M');
                        str.push_back('M');
                        break;
                }
            
            num %= pos;
            pos /= 10;
        }

        return str;
    }
};