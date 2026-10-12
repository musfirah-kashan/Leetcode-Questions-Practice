#include<stack>
#include<algorithm>
#include<string>
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>s1;
        for(int i=0; i<s.length(); i++){
            if(!s1.empty()&&s[i]==s1.top()){
                s1.pop();
            }else{
                s1.push(s[i]);
            }
        }
        string res="";
        while(!s1.empty()){
            res+=s1.top();
            s1.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};