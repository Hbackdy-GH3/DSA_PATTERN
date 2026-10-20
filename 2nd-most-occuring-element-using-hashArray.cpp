class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        int max_e=*max_element(nums.begin(),nums.end());
        int hashh[max_e+1]={0};
        for(int i=0;i<n;i++){
            hashh[nums[i]]++;
        }
        int firstF=0;
        int secondF=0;
        int firstE=-1;
        int secondE=-1;
        for(int i=0;i<max_e+1;i++){
            if(hashh[i]>firstF){
                secondF=firstF;
                secondE=firstE;
                firstF=hashh[i];
                firstE=i;
            }
            else if(hashh[i]<firstF && hashh[i]>secondF){
                secondF=hashh[i];
                secondE=i;
            }
        }
        return secondE;
    }
};
