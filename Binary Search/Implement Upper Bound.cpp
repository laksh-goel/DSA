int upperBound(vector<int> &arr, int x, int n){
		n=arr.size();
    int start = 0;
    int end = n-1;

 
    
    while (start<=end) {
        int mid = start + (end-start)/2;
 
        if (x >= arr[mid]) {
            start=mid+1;
        }
 
       
        else {
         end=mid-1;
        }
    }
   
    // if x is greater than arr[n-1]
    if(start<n-1 && arr[start] <= x) {
       start++;
    }
 
    // Return the upper bound index
    return start;

 
}