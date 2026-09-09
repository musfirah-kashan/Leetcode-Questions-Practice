class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>v1(nums.size(),0);
        int even=0;
        int odd=1;
        for(int num:nums){
            if (num%2==0){
                v1[even]=num;
                even+=2;
            }
            else{
                v1[odd]=num;
                odd+=2;
            }
        }
        return v1;
    }
};