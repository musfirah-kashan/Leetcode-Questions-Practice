class Solution {
public:
    int reverse(int x) {
        string str=to_string(x);
        string res = "";
        if (str[0]=='-'){
            res+='-';
            for(int i=str.length()-1; i>=1; i--){
            res+=str[i];
          }
        }
        else {
            for (int i = str.length() - 1; i >= 0; i--) {
                res += str[i];
            }
    }
    try {
            return stoi(res);
        } catch (...) {
            return 0;
        }
    }
};
