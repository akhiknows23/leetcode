class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums3;

        for (int x : nums1)
            nums3.push_back(x);

        for (int x : nums2)
            nums3.push_back(x);

        sort(nums3.begin(), nums3.end());

        int total = nums3.size();
        int mid = total / 2;

        if (total % 2 == 0) {
            return (nums3[mid - 1] + nums3[mid]) / 2.0;
        }

        return nums3[mid];
    }
};