class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>hash(256,-1);

        int l=0,r=0,max_len=0;
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }

           int len=r-l+1;
            max_len=max(len,max_len);
            hash[s[r]]=r;
            r++;
        }

        return max_len;
    }
};
