class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int maxStreak = 0;

        for(int num : nums)
            s.insert(num);

        for(int num : nums)
        {
            if(!s.count(num - 1))
            {
                int streak = 1;
                int currentNum = num;

                while(s.count(currentNum + 1))
                {
                    streak++;
                    currentNum++;
                }
                maxStreak = max(streak, maxStreak);
            }
        }
        return maxStreak;
    }
};