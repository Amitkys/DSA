// problem link : https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/1175111568/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        vector<int> pos;
	    vector<int> neg;
	   for(int i = 0; i < n; i++){
	       if(arr[i] >= 0){
	           pos.push_back(arr[i]);
	       }
	       else{
	           neg.push_back(arr[i]);
	       }
	   }
	   
	   int i = 0; // traverse till size of the positive element, also maintain index
	   int j = 0; // travesse till size of the negative element, also maintain index
	   int k = 0; // will maintain index
	   while(i < pos.size() && j < neg.size()){
	       ans.push_back(pos[i++]);
           ans.push_back(neg[j++]);
	   }
	   while(i < pos.size()){
	      ans.push_back(pos[i++]);
	   }
	   while(j < neg.size()){
	    ans.push_back(neg[j++]);
	   }

       return ans;
    }
};