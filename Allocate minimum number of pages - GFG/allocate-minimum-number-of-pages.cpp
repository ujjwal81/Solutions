// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int sum=0;int mx=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            mx=max(mx,A[i]);
        }
        int low=mx;
        int high=sum;
        int res=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(isFeasible(A,N,M,mid)){
                res=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return res;
    }
    
    bool isFeasible(int A[],int N,int M,int ans){
        int req=1;
        int sum=0;
        for(int i=0;i<N;i++){
            if(sum+A[i]>ans){
                req++;
                sum=A[i];
            }
            else
                sum+=A[i];
        }
        return (req<=M);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends