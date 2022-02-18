// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int ans = 0,sum = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i<N; i++){
            
            sum += A[i];
            int key = sum - K;
            
            if(sum == K)
                ans = i + 1;
            
            if(mp.find(sum) == mp.end())
               mp.insert({sum, i});
            
            if(mp.find(key) != mp.end()){
                ans = max(ans,i - mp[key]);
            }
          
        }
        return ans;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends