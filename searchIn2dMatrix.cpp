class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int col=matrix[0].size()-1;
        bool ans=false;
        while(row<matrix.size() and col>=0){
             if(matrix[row][col]==target){
                 ans=true;
                 break;
             }else if(matrix[row][col]>target){
                 col--;
             }else row++;
        }

        return ans;
    }
};
