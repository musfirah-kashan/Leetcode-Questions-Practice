class Solution {
public:
    bool checkRecord(string s) {
        if(count(s.begin(),s.end(),'A')>=2){
            return false;
        }
        int late=0;
        for(char ch:s){
            if (ch=='L'){
                late++;
            if(late>=3) return false;    
            }
            else{
                late=0;
            }
        }
        return true;
    }
};
