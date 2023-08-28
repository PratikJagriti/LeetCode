class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256,-1);
        int left = 0, right = 0;
        int length = 0;

        while(right < s.size())
        {
            if(map[s[right]] != -1 && left <= map[s[right]])
                left = map[s[right]] + 1;
            length = max(length, right-left+1);
            map[s[right]] = right;
            right++;
        }
        return length;
    }
};