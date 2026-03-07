class Solution {
public:
    void merge(vector<int>& arr, int m, vector<int>& brr, int n) {
        vector<int>ans;
        int i = 0;
        int j = 0;
        while(i < m && j < n){
            if(arr[i] == brr[j]){
                ans.push_back(arr[i]);
                ans.push_back(brr[j]);
                i++;
                j++;
            }
             else if(arr[i] < brr[j]){
                ans.push_back(arr[i]);
                i++;
            }
            else{
                ans.push_back(brr[j]);
                j++;
            }
        }
           
        while(i < m){
            ans.push_back(arr[i]);
            i++;
        }
        while(j < n){
            ans.push_back(brr[j]);
            j++;
        }
        for(int k = 0; k < ans.size(); k++){
            arr[k] = ans[k];
        }
    }
};
