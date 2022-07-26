class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        // int count=0;
        // for(int i=0;i<grid.size();++i){
        //     for(int j=0;j<grid[0].size();++j){
        //         if(grid[i][j]==1)
        //             count +=4;
        //         if(grid[i][j]==1 && grid[i-1][j]==1 && i!=0){
        //             count-=2;
        //         }
        //         if(grid[i][j]==1 && j!=0 && grid[i][j-1]==1){
        //             count-=2;
        //         }
        //     }
        // }
        // return count;
        int perimeter=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid.at(i).at(j)==1){
                    perimeter+=4;
                }
                if(i!=0 && grid[i][j]==1 && grid[i-1][j]==1){
                    perimeter-=2;
                }
                if(j!=0 && grid[i][j]==1 && grid[i][j-1]==1){
                    perimeter-=2;
                }
                               
            }
        }
        return perimeter;
    }
};