class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int length = nums.size();
        if(length==0 || length==1)  return;
        int i,j;

        for(i=length-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1])
                break;
        }
        if(i>=0)
        {
            for(j=length-1; j>i; j--)
            {
                if(nums[i]<nums[j])
                    break;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1, nums.end());
    }
};