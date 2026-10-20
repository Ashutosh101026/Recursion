class Solution {
public:
    void gen(string s,int opening,int closing,int n,vector<string>& ans){
        if(closing==n){
            ans.push_back(s);
            return;
        }
        if(opening<n) gen(s+"(",opening+1,closing,n,ans); // opening
        if(closing<opening) gen(s+")",opening,closing+1,n,ans); // closing
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gen("",0,0,n,ans);
        return ans;
    }
};