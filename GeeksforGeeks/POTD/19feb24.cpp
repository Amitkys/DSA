// problem link : https://www.geeksforgeeks.org/problems/game-with-string4100/1
class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int>m;
        int n=s.size();
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:m){
            pq.push({i.second,i.first});
        }
        
        while(k--){
            auto i=pq.top();
            pq.pop();
            i.first--;
            if(i.first){
                pq.push(i);
            }
        }
        
        int ans=0;
        while(!pq.empty()){
            auto i=pq.top();
            pq.pop();
            ans+=i.first*i.first;
        }
        return ans;
    }
};