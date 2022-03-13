// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        if(N==1)
            return false;
        if(N==2 || N==3)
            return true;
        if(N%2==0 || N%3==0)
            return false;
        for(int i=5;(i*i)<=N;i+=6){
            if(N%i==0 || N%(i+2)==0)
                return false;
        }
        return true;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends