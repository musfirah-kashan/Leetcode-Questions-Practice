class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0] + nums[1] <= nums[2])
            return "none";
        int count = 0;
        int l = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == l)
                count++;
        }
        if(count == 2) {
            return "equilateral";
        }
        else if(count == 1) {
            return "isosceles";
        }
        else {
            if(nums[1] == nums[2])
                return "isosceles";
            return "scalene";
        }
    }
};