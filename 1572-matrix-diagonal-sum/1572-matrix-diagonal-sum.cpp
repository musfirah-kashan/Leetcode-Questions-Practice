class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int total=0;
        for(int i=0 ; i<n; i++){
            total+=mat[i][i];
        }
        int j=n-1;
        for(int i=0 ; i<n; i++){
            if(i!=j){
                total+=mat[i][j];
            }
            j--;
        }
        return total;
    }
};