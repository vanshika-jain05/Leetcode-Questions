class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum_old= accumulate(nums.begin(),nums.end(),0LL);
        vector<int> diff(nums.size());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            string str= to_string(num);
            sort(str.begin(),str.end(),greater<int>());
            long long max_num= stoi(str);
            diff[i]=max_num-num;
        }
        sort(diff.begin(),diff.end(),greater<int>());

        long long increased_sum=0LL;
        for(int i=0;i<k;i++){
            increased_sum+= diff[i];
        }
        return sum_old+increased_sum;
    }
};