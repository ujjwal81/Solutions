class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> res;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                     string r="row"+to_string(i)+to_string(board[i][j]);
                    string c="column"+to_string(j)+to_string(board[i][j]);
                    string b="box"+to_string((i/3)*3+(j/3))+to_string(board[i][j]);
                    if(res.find(r)!=res.end()||res.find(c)!=res.end()||res.find(b)!=res.end())
                      return false;
                  else
                      
                  {
                      res.insert(r);
                      res.insert(c);
                      res.insert(b);
                  }
                }
            }
        }
        return true;
    }
};