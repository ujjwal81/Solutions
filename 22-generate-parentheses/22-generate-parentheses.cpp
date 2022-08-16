class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        paren("",0,0,ans,n);
        return ans;
    }
    
    void paren(string s,int o,int c,vector<string> &ans,int n){
        if(o==n && c==n){
            ans.push_back(s);
            return;
        }
        if(o<n){
            paren(s+'(',o+1,c,ans,n);
        }
        if(c<o){
            paren(s+')',o,c+1,ans,n);
        }
    }
};