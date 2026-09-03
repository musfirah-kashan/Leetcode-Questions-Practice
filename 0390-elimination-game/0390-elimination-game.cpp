class Solution {
public:
    int lastRemaining(int n) {
        int firstNumber=1;      
        int gap=1;      
        int count= n;
        bool left = true; 
        while (count > 1) {
            if (left || count % 2 == 1) {
                firstNumber += gap;
            }
            gap *= 2;       
            count /= 2;   
            left = !left;     
        }
        return firstNumber;
    }
};