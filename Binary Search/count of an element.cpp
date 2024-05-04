//Using Linear Search
int countOccurrences(int arr[], int n, int x)
{
    int count= 0;
    for (int i = 0; i < n; i++)
        if (x == arr[i])
            count++;
    return count;
}

//Using Binary Search
int firstocc(vector<int>arr, int x,int n){
	 n=arr.size();
	int start=0;
	int end=n-1;
	int res=0;
	while(start<=end){
		//Searching for the first occurence
    int mid=start+(end-start)/2;
	if(x==arr[mid]){
		res=mid;
		end=mid-1;
     }
	 else if(x<arr[mid]){
		 end=mid-1;
     } else {
                 start = mid + 1;
     }
        }
         return res;
}
int lastocc(vector<int>arr, int x,int n){
	 n=arr.size();
	int start=0;
	int end=n-1;
	int res=-1;
	while(start<=end){
		//Searching for the last occurence
    int mid=start+(end-start)/2;
	 if(x==arr[mid]){
		res=mid;
	   start=mid+1;
     }
	 else if(x<arr[mid]){
		 end=mid-1;
     } else {
                 start = mid + 1;
     }
        }
         return res;
	
}
int count(vector<int> & arr, int n, int x) {
        int result;
        // function call
        int first = firstocc(arr, x, n);
        int last = lastocc(arr, x, n);
        return (last-first+ 1);
}
