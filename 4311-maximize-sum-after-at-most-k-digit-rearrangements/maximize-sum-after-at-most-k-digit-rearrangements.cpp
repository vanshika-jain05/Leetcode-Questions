class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum_old= accumulate(nums.begin(),nums.end(),0LL);

        // making minHeap to store max K difference
        // smallest difference is at top of min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        int n=nums.size();
        for(int i=0;i<n;i++){

            int num=nums[i];
            string str= to_string(num);
            sort(str.begin(),str.end(),greater<int>());
            long long max_num= stoi(str);

            pq.push(max_num-num);
            // if size>k so remove the smallest diff, which is at top
            if(pq.size()>k) pq.pop();
        }

        long long increased_sum=0LL;
        while(!pq.empty()){
            increased_sum+=pq.top();
            pq.pop();
        }
        return sum_old+increased_sum;
    }
};