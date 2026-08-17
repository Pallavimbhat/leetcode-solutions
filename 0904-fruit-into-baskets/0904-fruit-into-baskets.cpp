class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0,r=0,maxl=0;
        map<int,int> mpp;
        while(r<n){
          mpp[fruits[r]]++;
          if(mpp.size()<=2){
            int len=r-l+1;
            maxl=max(maxl,len);
          }
          else{
            while(mpp.size()>2){
                mpp[fruits[l]]--;
            if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
                l++;
            }

          }
          r++;
        }
        return maxl;
    }
};