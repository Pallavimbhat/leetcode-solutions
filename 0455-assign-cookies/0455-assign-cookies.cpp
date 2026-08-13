class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int l=0,r=0;
        int gn=g.size();
        int sn=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<gn && r<sn){
            if(s[r]>=g[l]){
                r++;
                l++;
            }
            else{
                r++;
            }

        }
        return l;
    }
};