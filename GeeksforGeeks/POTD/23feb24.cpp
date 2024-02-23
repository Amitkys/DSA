// problem link : https://www.geeksforgeeks.org/problems/buy-and-sell-a-share-at-most-twice/1
class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&prices){
            //Write your code here..
            int n = prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<2;buy++){
                for(int trans=0;trans<=1;trans++){
                    if(buy==1){
         dp[ind][buy][trans] = max(-prices[ind]+dp[ind+1][0][trans],dp[ind+1][1][trans]);
        }
        else{
             dp[ind][buy][trans] = max(prices[ind]+dp[ind+1][1][trans+1],dp[ind+1][0][trans]);
                }
            }
        }
        }
        return dp[0][1][0];
        }
};