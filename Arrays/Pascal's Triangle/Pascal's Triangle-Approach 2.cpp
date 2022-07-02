class Solution {
public:
    void static printVector(vector<vector<int>> &pascal) {
        for(auto x: pascal) {
            for(int y: x) {
                cout << y << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        
        for(int i=0;i<numRows;i++) {
            if(i==0) {
                pascal.push_back({1});
            } else if(i==1) {
                pascal.push_back({1, 1});
            } else {
                int rowAboveSize = pascal[i-1].size();
                vector<int> rowVector(rowAboveSize+1, 1);
                for(int j=0;j<=rowAboveSize;j++) {
                    if(j!=0 && j!=rowAboveSize) {
                        rowVector[j] = pascal[i-1][j-1] + pascal[i-1][j];
                    }
                }
                pascal.push_back(rowVector);
            }
        }
        
        printVector(pascal);
        
        return pascal;
    }
};