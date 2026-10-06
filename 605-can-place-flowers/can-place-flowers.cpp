class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int last_one=0;
        int cnt=0;
        int len=flowerbed.size();
        for(int i=0;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0){
                if(last_one!=i-1 && flowerbed[i+1]!=1){
                    // can be planted
                    cnt++;
                    last_one=i;
                }
            }
            else last_one=i;
        }
        if(flowerbed[len-1]==0 && last_one!=len-2) cnt++;

        if(cnt>=n) return true;
        return false;
    }
};