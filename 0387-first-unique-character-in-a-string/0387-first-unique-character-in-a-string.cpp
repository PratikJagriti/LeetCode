class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> Map;
        for(int i=0; i<s.size(); i++)
            Map[s[i]]++;
        for(int i=0; i<s.size(); i++)
        {
            if(Map[s[i]] == 1)
                return i;
        }
        return -1;
    }
};