class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        auto toMin=[](string t){
           int h= stoi(t.substr(0,2));
           int m= stoi(t.substr(3,2));
           return h * 60 + m;
        };
        int s1=toMin(event1[0]);
        int e1 = toMin(event1[1]);
        int s2 = toMin(event2[0]);
        int e2 = toMin(event2[1]);

        return !(e1<s2|| e2<s1);
    }
};