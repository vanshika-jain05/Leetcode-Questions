class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            string st=to_string(x);
            if(st.size() %2==0) ans++;
        }
        return ans;
    }
};