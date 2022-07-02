class Solution {
public:
    void static print2DVector(vector<vector<int>>& matrixCopy){
        cout << "Copied Vector: " << endl;
        for(vector<int> x: matrixCopy) {
            for(int y: x) {
                cout << y << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    // Algo
    // 1. Copy vector into another
    // 2. For each cell having 0 check whether same cell in copied vector also has 0 or not
    // This means this cell originally had 0, not newly entered
    // 3. If true, mark entire row and cols of that cell as 0
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> matrixCopy;
        
        for(vector<int> x: matrix) {
            matrixCopy.push_back(x);
        }
        
        // print2DVector(matrixCopy);
        
        int noRows = matrix.size();
        int noCols = matrix[0].size();
        
        for(int i=0;i<noRows;i++) {
            for(int j=0;j<noCols;j++) {
                if(matrix[i][j] == 0 && matrixCopy[i][j] == 0) {
                    int row = 0;
                    int col = 0;
                    while(row != noRows) {
                        matrix[row][j] = 0;
                        row++;
                    }
                    while(col != noCols) {
                        matrix[i][col] = 0;
                        col++;
                    }
                }
            }
        }
        
    }
};