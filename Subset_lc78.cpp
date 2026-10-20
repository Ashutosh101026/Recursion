class Solution {
public:
    void power(int idx,vector<int> ans,vector<int>& arr,vector<vector<int>>& finalans){
        if(idx==arr.size()){
            finalans.push_back(ans);
            return;
        }
        power(idx+1,ans,arr,finalans);
        ans.push_back(arr[idx]);
        power(idx+1,ans,arr,finalans);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int>ans;
        vector<vector<int>> finalans;
        power(0,ans,arr,finalans);
        return finalans;       
    }
};