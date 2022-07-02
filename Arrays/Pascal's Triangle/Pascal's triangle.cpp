class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        v[0] = vector<int>(numRows);
        fill(v[0].begin(), v[0].end(), 1);
        
        int n = numRows;
        for(int i = 1; i < n; i++) {
            v[i] = vector<int>(n-i);
            for(int j = 0; j < (n-i); j++) {
                if(j == 0) {
                    v[i][j] = 1;
                }
                else {
                    v[i][j] = v[i][j-1] + v[i-1][j];
                }
            }
        }
        
        vector<vector<int>> v_final(numRows);
        
        for(int i = 0; i < n; i++) {
            v_final[i] = vector<int>(i+1);
            for(int j=0, k=i; j < (i+1); j++,k--) {
                cout<<"(v_final["<<i<<"]["<<j<< "]) "<<v_final[i][j]<<  " = (v["<<j<<"]["<<k<<"]) "<<v[j][k]<<endl; 
                v_final[i][j] = v[j][k];
            }
        }
        return v_final;
    }
};