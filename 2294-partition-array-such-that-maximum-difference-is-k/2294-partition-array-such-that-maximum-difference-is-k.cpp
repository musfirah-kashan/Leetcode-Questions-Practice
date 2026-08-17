#include <algorithm>
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int min_value = nums[0];
        for (int i : nums) {
            if (i - min_value > k) {
                count++;
                min_value = i;
            }
        }
        return count;
    }
};