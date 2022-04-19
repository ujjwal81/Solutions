// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> goals(int X, int Y, int Z){
        // code here
        int goalx=0;
        int goaly=0;
        while(Z!=1){
            if(X%Z==0){
                goalx++;
                X--;
            }
            else if(Y%Z==0){
                goaly++;
                Y--;
            }
            else{
                Z--;
            }
        }
        vector<int> b;
        b.push_back(goalx);
        b.push_back(goaly);
        return b;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, Z;
        cin>>X>>Y>>Z;
        
        Solution ob;
        vector<int> ans = ob.goals(X, Y, Z);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends