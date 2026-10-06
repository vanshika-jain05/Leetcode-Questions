class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,r=0;
        int ans=0;
        int cnt=0;
        while(r<nums.size()){
            if(nums[r]==0){
                r++;
                l=r;
                cnt=0;
            }
            else {
                r++;
                cnt++;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};