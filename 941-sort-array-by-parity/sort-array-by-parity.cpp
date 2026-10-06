class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,r=0;
        while(r<nums.size()){
            if (nums[l]%2==1 && nums[r]%2==0){
                swap(nums[l],nums[r]);
                l++;
                r++;
            }
            else if(nums[l]%2==0){
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        return nums;
    }
};