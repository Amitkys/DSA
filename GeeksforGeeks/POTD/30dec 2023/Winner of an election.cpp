class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
      map<string,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        vector<string> ans;
        string a="";
        int v=0;
        for(auto x:mp) v=max(v,x.second);
        for(auto x:mp) {
            if(x.second==v){
               a=x.first;
               break;
            } 
        }
         ans.push_back(a);
         ans.push_back(to_string(v));
         return ans;  
    }
};
