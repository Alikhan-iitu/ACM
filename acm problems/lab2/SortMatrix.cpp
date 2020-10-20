class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector < int > d[n + m - 1];
        
        int delta = m - 1;
        
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                int x = i - j + delta;
                d[x].push_back(mat[i][j]);
            }
        }
        
        for(int k = n - 1; k >= 1 - m; --k){
            sort(d[k + delta].begin(), d[k + delta].end());
            reverse(d[k + delta].begin(), d[k + delta].end());
        }
        
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                int x = i - j + delta;
                mat[i][j] = d[x].back();
                d[x].pop_back();
            }
        }
        return mat;
    }
};
