class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();        
        vector <int> arr(n);
        for(int i=0; i<n; i++){
           int newidx=(i+nums[i])%n;
           if(newidx<0){
            newidx+=n;
           }
           arr[i]=nums[newidx];
        }
        return arr;
    }
};