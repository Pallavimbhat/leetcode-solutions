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
        return el;
    }
};