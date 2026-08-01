class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;
        while(n>0){
            int digits=n%10;
            sum+=digits;
            prod*=digits;
            n=n/10;
        }
        return prod-sum;
    }
};