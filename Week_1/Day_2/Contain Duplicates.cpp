class Solution {
public:
    bool Contain_Duplicate(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();

        for(int i=0;i<n;i++){
        int num=nums[i];

        if(s.count(num)){
          return true;
    }

    s.insert(num);
    }
    return false;
}
};
