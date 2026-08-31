class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>seen(n+1,0);
        vector<int>C;
        int count=0;
        for(int i=0; i<n; i++){
            if(seen[A[i]]==1){
                count++;
                seen[A[i]]=2;
            }
            else if(seen[A[i]]==0){
                seen[A[i]] = 1;
            }
             if(seen[B[i]]==1){
                count++;
                seen[B[i]]=2;
            }
            else if(seen[B[i]]==0){
                seen[B[i]] = 1;
            }
            C.push_back(count);
        }   
        return C;
    }
};
