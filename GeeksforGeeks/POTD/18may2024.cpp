//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
           ans = max(ans, arr[mid]);
           if((mid + 1 < n) && (arr[mid-1] <= arr[mid])){
               low = mid + 1;
           }
           else{
               high = mid - 1;
           }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends