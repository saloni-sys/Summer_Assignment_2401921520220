class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int max_pro=0;
        int best_buy=nums[0];
        for(int i=1;i<n;i++){
          if(nums[i]>best_buy){
          max_pro=max(max_pro,nums[i]-best_buy);

    }
  best_buy=min(best_buy,nums[i]);
        }
return max_pro;
    }
};
