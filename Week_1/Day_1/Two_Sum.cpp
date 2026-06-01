class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size();
      unordered_map<int,int> M;
      for(int i=0;i<n;i++){
      int first=nums[i];
      int sec=target-first;
      if(M.find(sec)!=M.end()){
        return {M[sec], i};
    }
        M[first]=i;
};
