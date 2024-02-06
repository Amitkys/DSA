class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   int first = INT_MIN;
	   int second;
	   for(int i = 0; i < n; i++){
	       if(arr[i] > first){
	           second = first;
	           first = arr[i];
	       }
	       else{
	           if(arr[i] > second && arr[i] != first){
	               second = arr[i];
	           }
	       }
	   }
	   if(second == INT_MIN){
	       return -1;
	   }
	   else{
	       return second;
	   }
	}
};