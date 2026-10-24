class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()<=1) return nums[0];
        int hashh[20001]={0};
        for(int i=0;i<nums.size();i++){
            hashh[nums[i]+10000]++;
        }
        int i;
        for(i=0;i<nums.size();i++){
            if(hashh[nums[i]+10000]>((nums.size())/2)){
                break;
            }
        }
        return nums[i];
    }
};
