class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>a;
        vector<int>b;
        vector<int>c;
        for(int i:nums){
            if(i<pivot){
                a.push_back(i);
            }
            else if(i==pivot){
                b.push_back(i);
            }
            else{
                c.push_back(i);
            }
        }
        a.insert(a.end(),b.begin(),b.end());
        a.insert(a.end(),c.begin(),c.end());
        return a;
    }
};