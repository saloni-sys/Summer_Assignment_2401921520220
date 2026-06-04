class Solution {
public:
    vector<int> spiralmatrix(vector<vector<int>>& matrix) {
        vector<int> ans;

        int m = matrix.size();
        int n = matrix[0].size();

        int sr = 0, sc = 0;
        int er = m - 1, ec = n - 1;

        while (sr <= er && sc <= ec) {

            // top
            for (int j = sc; j <= ec; j++) {
                ans.push_back(matrix[sr][j]);
            }

            // right
            for (int i = sr + 1; i <= er; i++) {
                ans.push_back(matrix[i][ec]);
            }

            // bottom
            if (sr < er) {
                for (int j = ec - 1; j >= sc; j--) {
                    ans.push_back(matrix[er][j]);
                }
            }

            // left
            if (sc < ec) {
                for (int i = er - 1; i > sr; i--) {
                    ans.push_back(matrix[i][sc]);
                }
            }

            sr++;
            sc++;
            er--;
            ec--;
        }

        return ans;
    }
};
