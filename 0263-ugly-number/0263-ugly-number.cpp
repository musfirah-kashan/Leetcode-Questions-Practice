class Solution {
public:
    bool isUgly(int n) {
      vector<int>nums{2,3,5};
      if(n<=0) return false;
      for(int i: nums){
        while(n%i==0){
           n/=i; 
        }
      }
      return n==1;
    }
};