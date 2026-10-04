class Solution {
public:
    int maxArea(vector<int>& height) {
        //brute-force approach
        // int maxwater=0;
        // int n=height.size();
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         int w=j-i;
        //         int h=min(height[i],height[j]);
        //         int area= w*h;
        //         maxwater=max(maxwater, area);
        //     }
        // }
        // return maxwater;// TLE ERROR

        //optimal approach

        int left=0;
        int right=height.size()-1;
        int max_water=0;
        while (left<right){
           int w=right-left;
            int h=min(height[left],height[right]);
            int area= w*h;
            max_water=max(area, max_water);
            if (height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
    }
};