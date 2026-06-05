class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

      int m=mat.length;
      int n=mat[0].length;

      if(m*n!=r*c){
        return mat;
      }

      int[][] new_mat=new int[r][c];

      int old_idx=0;
      int new_idx=0;

      while(old_idx<m*n&&new_idx<r*c){
        new_mat[new_idx/c][new_idx%c]=mat[old_idx/n][old_idx%n]
          old_idx++;
          new_idx++;
      }

     return new_mat; 
        
    }
};
