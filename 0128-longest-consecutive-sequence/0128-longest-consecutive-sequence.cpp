class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int n = nums.size();

        int length = 1;
        int maxLength = 1;

        for(int i = 0; i < n - 1; i++) {

            if(nums[i + 1] == nums[i] + 1) {
                length++;
            }
            else {
                maxLength = max(maxLength, length);
                length = 1;
            }
        }

        maxLength = max(maxLength, length);

        return maxLength;
    }
};