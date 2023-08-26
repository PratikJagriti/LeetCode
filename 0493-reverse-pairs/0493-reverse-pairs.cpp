class Solution {
public:
    int merge(vector<int> &nums, int l, int mid, int h)
    {
        int count = 0;
        int i, j;
        j = mid+1;

        for(i=l; i<=mid; i++)
        {
            while(j<=h && nums[i] > 2LL * nums[j])
                j++;
            count += (j-(mid+1));
        }

        vector<int> temp;
        i = l;
        j = mid+1;
        while(i<=mid && j<=h)
        {
            if(nums[i] <= nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }

        while(i<=mid)
            temp.push_back(nums[i++]);
        while(j<=h)
            temp.push_back(nums[j++]);
        
        for(i=0; i<temp.size(); i++)
            nums[i+l] = temp[i];
        
        return count;
    }

    int mergeSort(vector<int> &nums, int l, int h)
    {
        int count = 0;
        int mid;
        if(l < h)
        {
            mid = (l+h)/2;
            count += mergeSort(nums, l, mid);
            count += mergeSort(nums, mid+1, h);
            count += merge(nums, l, mid, h);
        }
        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};