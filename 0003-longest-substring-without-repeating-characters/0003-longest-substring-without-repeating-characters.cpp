class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mpp;
        int i=0,j=0;
        int len=0;
        while(j<s.size()){
            mpp[s[j]]++;
            while(mpp[s[j]]>1){
                mpp[s[i]]--;
                i++;
            }
            j++;
            len=max(len,j-i);

        }
        return len;
    }
};