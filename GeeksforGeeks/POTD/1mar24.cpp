// problem link : https://www.geeksforgeeks.org/problems/peak-element/1
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int l = 0, h = n-1;
       int m;
       
       while(l<=h) {
            m = (l+h)/2;
            if((m==0 || (arr[m]>=arr[m-1])) && (m == n-1 || (arr[m]>=arr[m+1])))
                return m;
            else if(m>0 && arr[m]<=arr[m-1])
                h = m-1;
            else
                l = m+1;
       }
       return -1;
    }
};