class Solution {
public:
    int signFunc(int x){
        if(x>0){
            return 1;
        }
        else if(x<0){
            return -1;
        }
        else{
            return 0;
        }
    }
    int arraySign(vector<int>& nums) {
        int res=1;
        for(int i=0; i<nums.size(); i++){
           res*=signFunc(nums[i]);
        }
        return res;
    }
};