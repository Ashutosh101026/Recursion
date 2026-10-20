class Solution {
  public:
        void power(int idx,int ans,vector<int>& arr,vector<int>& finalans){
            if(idx==arr.size()){
                finalans.push_back(ans);
                return;
            }
            power(idx+1,ans,arr,finalans);
            ans  + = arr[idx];
            power(idx+1,ans,arr,finalans);
        }
        
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>finalans;
        power(0,0,arr,finalans);
        return finalans;  
        
    }
};