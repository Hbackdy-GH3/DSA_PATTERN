class Solution {
public:
    vector<int> merge(vector<int>& nums, int st,int mid, int end){
        vector<int> temp;
        int i=st;
        int j=mid+1;
        while(i<=mid && j<=end){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(nums[j]);
            j++;
        }
        for(int i=0;i<temp.size();i++){
            nums[i+st]=temp[i];
        }
        return nums;
    }
    vector<int> div(vector<int>& nums, int st, int end){
        if(st<end){
            int mid=st+(end-st)/2;
            div(nums,st,mid);
            div(nums,mid+1,end);

            merge(nums,st,mid,end);
        }
        return nums;
    }
    vector<int> mergeSort(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        if(st==end) return nums;
        return div(nums,st,end);
    }
};
