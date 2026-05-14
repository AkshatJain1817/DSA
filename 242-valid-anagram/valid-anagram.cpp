class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> count(26,0);
        for(char i:s){
            count[i-'a']++;
        }
        for(char j:t){
            count[j-'a']--;
        }

        for(int i=0;i<26;i++){
            if(count[i]!=0) return false;
        }
        return true;
    }
};