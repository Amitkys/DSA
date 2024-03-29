// problem link : https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1
class Solution {
public:
    string removeDuplicates(string str) {
        unordered_set<char> st;
        string out;
        for(auto i : str){
            if(st.find(i) == st.end()){
                out += i;
                st.insert(i);
            }
        }
        return out;
    }
};