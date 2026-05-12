class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>> mpp;
        int sum=0;
        mpp[0].push_back(-1);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                sum-=1;
            }else{
                sum+=1;
            }
            mpp[sum].push_back(i);
        }
        int maxi=0;
        for(auto it : mpp){
            vector<int>& indices = it.second;

            if(indices.size()>1){
                int len=indices.back()-indices.front();
                maxi=max(maxi,len);
            }
        }
        return maxi;
    }
};