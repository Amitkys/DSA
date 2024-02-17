// problem link : https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1
class Solution{
    public:
    bool isMaxHeap(int arr[], int n){
        //left child=2*i+1, right child=2*i+2,parent=i-1/2
        if(n<2)
            return true;
        if(arr[0]<arr[1] || arr[0]<arr[2])
            return false;
        for(int i=1;i<n;i++){
            int left=2*i+1, right=2*i+2, parent =(i-1)/2;
            if(arr[i]>arr[parent])
                return false;
            if((left<n && arr[i]<arr[left]) || (right<n && arr[i]<arr[right]) )
                return false;
        }
        return true;
    }
};