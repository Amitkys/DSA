//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int m)
		{
		   long long result = 1;
        x = x % m;  // Update x to be x % m

        while (n > 0) {
            // If n is odd, multiply x with the result
            if (n % 2 == 1)
                result = (result * x) % m;

            // n must be even now
            n = n >> 1;  // Divide n by 2
            x = (x * x) % m;  // Change x to x^2
        }

            return result;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends