class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int x;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                x=nums[i];
            }
            if(x==nums[i]){
                count++;
            }
            else count--;
        }
          count++;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x) count++;
        }
        if(count>(nums.size()/2)) return x;
        return -1;
    }
};