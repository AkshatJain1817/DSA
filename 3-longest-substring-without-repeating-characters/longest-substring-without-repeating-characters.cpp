class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> lastseen;
        int left=0;
        int maxLen=0;
        for(int right=0;right<s.length();++right){
            char currentChar = s[right];
            if(lastseen.find(currentChar)!=lastseen.end() && lastseen[currentChar]>=left){
                left = lastseen[currentChar] + 1;
            }
            lastseen[currentChar]=right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};