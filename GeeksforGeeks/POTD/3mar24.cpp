// problem link : https://www.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1
bool customComparator(string a, string b) {
    return a + b > b + a;
}
class Solution{
public:

	string printLargest(int n, vector<string> &arr) {
	   sort(arr.begin(), arr.end(), customComparator);

        string result = "";
        for (int i = 0; i < n; i++) {
            result += arr[i];
        }

        return result;
	}

};