class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int diff = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums.size()<2)
            return 0;
        
        for(int i=0 ; i<n-1;i++){
            int d = nums[i+1] - nums[i];
            diff = max(d,diff);
        }
        return diff;

        
    }
};