class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map<pair<int,int> , int> mpp;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            // counting already equal adjacent pairs 
            if(nums[i]==nums[i+1]) cnt++;
            else{
                // storing unequal adjacent pairs
                mpp[{min(nums[i],nums[i+1]), max(nums[i], nums[i+1])}] ++;
            }
        }
        int maxx=0;
        for(auto it:mpp){
            // finding max freq pair so that we can turn the {x,y} to either {x,x} or {y,y}
            if(it.second > maxx) maxx=it.second;
        }
        return cnt+maxx;
    }
};