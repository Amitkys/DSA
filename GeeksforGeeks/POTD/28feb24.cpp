// problem link : https://www.geeksforgeeks.org/problems/check-if-a-number-is-divisible-by-83957/1
class Solution{
    public:
    int DivisibleByEight(string s)
    {
        //code here
         int n=s.size(); 
        int nu=0;
        if(n<3)
        {
            for(int i=0;i<n;i++)
            nu=(nu*10)+s[i]; 
            
            if(nu%8==0)
            return 1;
        }
        int num=0;
        for(int i=n-3;i<n;i++)
        {
            num=(num*10)+s[i]; 
        } 
        if(num==0)
        return 1;
        if(num%8==0)
        return 1;
        
    return -1;
    }
};