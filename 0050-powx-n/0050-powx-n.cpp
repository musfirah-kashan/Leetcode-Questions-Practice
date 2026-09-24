class Solution {
public:
    double myPow(double x, int n) {
        // double res=1;
        // long long exp=n;
        // if(n>=0){
        //    for(long long i=1; i<=exp; i++){
        //     res*=x;
        //    } 
        // }else{
        //     for(long long i=1; i<=-exp; i++){
        //         res*=x;
        //     }
        //     res=1/res;
        // }
        // return res;  //slow working
        

      double res = 1.0;
        long long exp = n;
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }
        while (exp > 0) {
            if (exp % 2 == 1)
                res *= x;
            x *= x;
            exp /= 2;
        }
        return res;
        
    }
};
