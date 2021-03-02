class NumMatrix {
public:
    vector<vector<int>> sums;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> temp(n+1);
        sums.resize(m+1,temp);
        for (int i=0; i<m+1; i++){
            sums[i][0] = 0;
        }
        for(int i=0; i<n+1; i++){
            sums[0][i] = 0;
        }
        for (int i=1; i<m+1; i++){
            for(int j=1; j<n+1; j++){
                sums[i][j] = matrix[i-1][j-1] + sums[i-1][j] + sums[i][j-1] -sums[i-1][j-1];
            }
        }

    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return (sums[row2+1][col2+1]-sums[row2+1][col1]-sums[row1][col2+1]+sums[row1][col1]);

    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */