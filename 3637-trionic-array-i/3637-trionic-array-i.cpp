class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n =nums.size();
        if(n<4){
            return false;
        }
        int i=0;
        while(i+1<n &&nums[i+1]>nums[i]){
            i++;
        }
        if(i==0) return false;
        int start=i;
        while(i+1<n && nums[i]>nums[i+1]){
            i++;
        }
        if(i==start) return false;
        int inc=i;
        while(i+1<n && nums[i]<nums[i+1]){
            i++;
        }
        return inc<i && i==n-1;
    }
};