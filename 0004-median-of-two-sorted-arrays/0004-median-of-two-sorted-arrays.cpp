class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1.size() + nums2.size());
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
    int mid = merged.size()/2;
    if(merged.size()%2!=0){
        return merged[mid];
    }
    else{
        double value = (merged[mid]+merged[mid - 1])/2.0;
         return value;
    }
  return -1;
    }
};