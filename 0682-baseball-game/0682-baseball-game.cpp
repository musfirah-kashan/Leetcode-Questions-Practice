class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>res;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="C"){
                res.pop_back();
            }
            else if(operations[i]=="+"){
                int n = res.size();
                res.push_back(res[n-1] + res[n-2]);
            }
            else if(operations[i]=="D"){
                res.push_back(2*res.back());
            }
            else{
                res.push_back(stoi(operations[i]));
            }
        }
        int sum=0;
        for(int i:res){
            sum+=i;
        }
        return sum;
    }
};