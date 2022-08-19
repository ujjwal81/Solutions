class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int directionFlag=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int right=m-1;
        int left=0;  //we are using direction flag to keep in mind the rotation for each no
        int top=0;
        int down=n-1;
        
        while(top<=down && left<=right){
            if(directionFlag==0){
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(directionFlag==1){
                for(int i=top;i<=down;i++){
                    ans.push_back(matrix[i][right]);   
                }
                right--;
            }
            else if(directionFlag==2){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(directionFlag==3){
                for(int i=down;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            directionFlag=(directionFlag+1)%4;
        }
        return ans;
    }
};