class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k = k % n;
        vector <int> one;
        vector <int> two;
        one.insert(one.end(), nums.begin(), nums.end() - k);
        two.insert(two.end(), nums.end() - k, nums.end());
        nums.clear();
        nums.insert(nums.end(), two.begin(), two.end());
        nums.insert(nums.end(), one.begin(), one.end());
    }
};