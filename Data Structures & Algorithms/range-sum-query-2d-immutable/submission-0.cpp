class NumMatrix {
private:
    vector<vector<int>> psum;
public:
    NumMatrix(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();


        psum.assign(rows, vector<int>(cols));
        for (int r = 0; r < rows; r++) {
            psum[r][0] = matrix[r][0];
            for (int c = 1; c < cols; c++) {
                psum[r][c] = psum[r][c-1] + matrix[r][c];
            }
        }

        for (int c = 0; c < cols; c++) {
            for (int r = 1; r < rows; r++) {
                psum[r][c] += psum[r-1][c];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int res = psum[row2][col2];

        if (row1 > 0)
            res -= psum[row1 - 1][col2];
        if (col1 > 0)
            res -= psum[row2][col1 - 1];
        
        if (row1 > 0 && col1 > 0)
            res += psum[row1 - 1][col1 - 1];
        
        return res;

    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */