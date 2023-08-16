class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = 0;
        int slow = 0;

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(fast != slow);
        
        cout<< fast<< " "<<slow;
        fast = 0;

        while(fast != slow)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};