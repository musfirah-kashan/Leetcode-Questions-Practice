class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string no=to_string(num);
        int count=0;
        for(int i=0; i<=no.length()-k; i++){
            int value=stoi(no.substr(i, k));
            if (value!=0 && num%value==0){
                count++;
            }
        }
        return count;
    }
};