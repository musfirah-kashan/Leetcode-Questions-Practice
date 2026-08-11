class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a_single=0;
        int a_double=0;
        int res=0;
        for (int i=0; i<nums.size(); i++) {
            int n=nums[i];
            res+=n; 
            if (n<10) {
                a_single+=n;
            }
            if (n>9) { 
                a_double+=n;
            }
        }
        int b_single=res-a_single;
        int b_double=res-a_double;
        if (a_single>b_single||a_double>b_double) {
            return true;
        } 
        else {
            return false;
    }
}
};