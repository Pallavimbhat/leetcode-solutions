class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxl=0;
        int hash[256];
        fill(hash,hash+256,-1);
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }

            }
            int len=r-l+1;
            maxl=max(maxl,len);
            hash[s[r]]=r;
            r++;
        }
        return maxl;
    }
};