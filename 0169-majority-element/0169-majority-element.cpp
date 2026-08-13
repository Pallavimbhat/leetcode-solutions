class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=nums[0];
        int cnt=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==el) cnt++;
            else cnt--;
            if(cnt==0){
                el=nums[i];
                cnt=1;
            }
        }
        cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el) cnt++;
        }
        if(cnt>n/2) return el;
        else return -1;
    }
};