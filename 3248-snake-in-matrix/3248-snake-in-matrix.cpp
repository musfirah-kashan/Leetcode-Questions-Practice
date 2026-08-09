#include <string>
class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
    int r=0;
    int c=0;
    for (string i:commands) {
        if (i=="UP") {
            r-=1;
        }
        else if (i=="DOWN") {
            r+=1;
        }
        else if (i=="RIGHT") {
            c+=1;
        }
        else{ 
            c-=1;
        }
    }
    return (r*n)+c;
    }
};