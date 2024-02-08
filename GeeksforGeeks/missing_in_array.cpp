class Solution{
  public:
    int missingNumber(vector<int>& arr, int n) {
        int total = (n*(n+1))/2;
    
        
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
        }
        return (total - sum);
    }
};