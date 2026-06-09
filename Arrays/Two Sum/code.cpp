class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),left=0,right=n-1;
        vector<pair<int,int>>numPair;
        for(int i=0;i<n;++i){
            numPair.push_back({nums[i],i});
        }
        sort(numPair.begin(),numPair.end());
        while(left!=right){
            int sum=numPair[left].first+numPair[right].first;
            if(sum>target){
                --right;
            }
            else if(sum<target){
                ++left;
            }
            else{
            return {numPair[left].second,numPair[right].second};
            }
        }
        return {-1,-1};
    }
};
