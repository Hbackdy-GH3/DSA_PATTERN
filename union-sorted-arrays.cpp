class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int left=0;
        int right=0;
        int n=nums1.size();
        int m=nums2.size();
        while (left < n && right < m){
            if(nums1[left]<nums2[right]){
                if (nums.empty() || nums.back() != nums1[left]) {
                    nums.push_back(nums1[left]);
                }
                left++;
            }else if(nums1[left]>nums2[right]){
                if (nums.empty() || nums.back() != nums2[right]) {
                    nums.push_back(nums2[right]);
                }
                right++;
            }else{
                if (nums.empty() || nums.back() != nums1[left]){
                    nums.push_back(nums1[left]);
                }
                left++;
                right++;
            }
        }
        while(left<n){
            if(nums.empty() || nums.back()!=nums1[left]){
                nums.push_back(nums1[left]);
            }
            left++;
        }
        while(right<m){
            if(nums.empty() || nums.back()!=nums2[right]){
                nums.push_back(nums2[right]);
            }
            right++;
        }
        return nums;
    }
};
