class Solution {
public:
    bool rotateString(string s, string goal) {
         if (s.length() != goal.length()) return false;
         int n = s.length();
         for(int i=0; i<n; i++){
            if(s==goal){
                return true;
            } 
            else{
                char first=s[0];
                for(int i=0; i<n; i++){
                    s[i]=s[i+1];
                }
                s[n-1]=first;
            }
         }
        return false;
    }
};