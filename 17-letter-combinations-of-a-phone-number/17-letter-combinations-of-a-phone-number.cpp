class Solution {
public:
    vector<string> back(string &digits,int i,map<int,string> &m){
        if(i==digits.size()){
            return {""};
        }
        vector<string> temp=back(digits,i+1,m);
        vector<string> ans;
        for(auto a:m[digits[i]-'0']){
            for(auto b:temp){
                ans.push_back(a+b);
            }
        }
        return ans;
        
    }
    vector<string> letterCombinations(string digits) {
        map<int,string> m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        if(digits.size()==0){
            return {};
        }
        return back(digits,0,m);
    }
};