class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maxi=*max_element(arr1.begin(),arr1.end());
        vector<int> freq(maxi+1);
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
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]>0){
                while(freq[i]>0){
                    ans.push_back(i);
                    freq[i]--;
                }
            }
        }
        return ans;
    }
};