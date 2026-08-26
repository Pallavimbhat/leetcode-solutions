class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256,-1);
        int len=0;
        int i=0,j=0;
        while(j<s.size()){
            if(v[s[j]]!=-1){
                i=max(i,v[s[j]]+1);
            }
            v[s[j]]=j;
            j++;
            len=max(len,j-i);
        }
        return len;
    }
    
};