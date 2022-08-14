class Solution {
public:
    int titleToNumber(string columnTitle) {
       int total=0;
        int power=0;
        for(int i=columnTitle.size()-1;i>=0;i--){
           int val=columnTitle[i]-'A'+1;
            total+=pow(26,power)*val;
            power++;
       } 
        return total;
    }
};