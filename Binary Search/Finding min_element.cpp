int minimum(int arr, int n) {
int n=arr.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int next=(mid+1)%N;
            int prev=(mid+N-1)%N;
            //Min element is that which is smaller to both its right element and left element
            //Checking whether the mid element found is minimum or not
            if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
                return mid;
            }
            //whether to go in left array or right array
            //unsorted array gives the minimum element
            elseif(arr[start]<arr[mid]){
                start=mid+1;
            }
            elseif(arr[mid]<=arr[end]){
                end=mid        -1;

            }
            
            return mid;
        }
        
    }
};