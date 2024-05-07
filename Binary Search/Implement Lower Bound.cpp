int lowerBound(vector<int> arr, int n, int x) {
	 n=arr.size();
    int start = 0;
    int end = n-1;
    while (start<=end) {
        int mid = start + (end-start) / 2;
 
        if (x <= arr[mid]) {
            end=mid-1;
        }
 
        else {
            start=mid+1;
        }
    }
   
    // if x is greater than arr[n-1]
    if(start<=n-1 & arr[start] < x) {
       start++;
    }
       
    // Return the lower bound index
    return start;
}