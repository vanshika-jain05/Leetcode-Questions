class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>freq;
        vector<int>ans;
        for(int i:arr1){
            freq[i]++;
        }
        for(int i=0;i<arr2.size();i++){
            int elem=arr2[i];
            while(freq[elem]>0){
                ans.push_back(elem);
                freq[elem]--;
            }
            freq.erase(elem);
        }
        for(auto it:freq){
            int key=it.first;
            int val=it.second;
            while(val>0){
                ans.push_back(key);
                val--;
            }
        }
        return ans;
    }
};