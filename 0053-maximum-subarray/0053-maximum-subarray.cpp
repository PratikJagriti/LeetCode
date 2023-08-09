class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int maxSum = nums[0];
        int sum = 0;
        for(int i=0; i<len; i++)
        {
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
};