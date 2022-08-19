class Solution {
public:
    vector<string> comb(string &digits,int i,map<int,string> &b){
        if(i==digits.size()){
            return {""};
        }
        vector<string> temp=comb(digits,i+1,b);
        vector<string> ans;
        for(auto a:b[digits[i]-'0'])             //we are using backtracking
            for(auto c:temp)
                ans.push_back(a+c);
        return ans;
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        map<int,string> b;
        b[2]="abc";
        b[3]="def";
        b[4]="ghi";
        b[5]="jkl";
        b[6]="mno";
        b[7]="pqrs";
        b[8]="tuv";
        b[9]="wxyz";
        return comb(digits,0,b);
    }
};