class Solution {
public:
    vector<string> generateBinaryStrings(int n) {
        vector<string> result;
        string curr;
        backtrack(n,curr,result,'0');
        return result;
    }

private:
    void backtrack(int n, string &curr, vector<string> &result, char prev){
        if((int)curr.size()==n){
            result.push_back(curr);
            return;
        }

        curr.push_back('0');
        backtrack(n,curr,result,'0');
        curr.pop_back();

        if(prev!='1'){
            curr.push_back('1');
            backtrack(n,curr,result,'1');
            curr.pop_back();
        }
    }
};
