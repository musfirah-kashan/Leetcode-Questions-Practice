class Solution {
public:
 bool ispalindrome(string s){
            int i=0;
            int j= s.length()-1;
            while(i<j){
                if(s[i]!=s[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
            }
    int removePalindromeSub(string s) {
        if(s.length()==0){
            return 0;
        }
        if (ispalindrome(s)){
            return 1;
        }
        return 2;
        // string temp=s;
        // reverse(temp.begin(), temp.end());
        // if(s==temp){
        //     return 1;
        // }
        // return 2;
       
       
    }
};