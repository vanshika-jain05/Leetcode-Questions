class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int largest=prices[n-1];
        int maxx=0;
        for(int i=n-1;i>=0;i--){
            maxx=max(maxx, largest-prices[i]);
            largest=max(largest, prices[i]);
        }
        return maxx;
    }
};