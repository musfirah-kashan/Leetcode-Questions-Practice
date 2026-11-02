class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // for(int start=0; start<nums.size();start++){
        //     int currentsum=0;
        //     for(int end=start; end<nums.size(); end++){
        //         currentsum+=nums[end];
        //         maxsum=max(maxsum,currentsum);
        //     }
        // }
        // return maxsum; TLE error

        int current_sum=0;
        int maxsum=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            current_sum+=nums[i];
            maxsum=max(maxsum,current_sum);
            if(current_sum<0){
                current_sum=0;
            }
        }
        return maxsum;
    }
};