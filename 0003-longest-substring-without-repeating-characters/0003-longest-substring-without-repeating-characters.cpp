class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)   return 0;
        unordered_set<char> set;
        int maxCount = 0;
        int i, j = 0;

        for(i=0; i<s.size(); i++)
        {
            if(set.find(s[i]) == set.end())
                set.insert(s[i]);
            else
            {
                maxCount = max(maxCount, i - j);
                while(s[j] != s[i])
                {
                    set.erase(s[j]);
                    j++;
                }
                j++;
            }
        }
        maxCount = max(maxCount, i - j);

        return maxCount;
    }
};