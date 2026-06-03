class Solution {
public:
    int maxArea(vector<int>& height) {

      int lp=0,rp=n-1;
      int max_water=0;
      while(lp<rp){
      int wt=rp-lp;
      int ht =min(height[lp],height[rp]);
      int cur_water=wt*ht;
       max_water=max(max_water,cur_water);

        if(height[lp]<height[rp]){
         lp++;
          
        }else{
          rp--;
        }
        
        
      }
      return max_water;  
    }
};
