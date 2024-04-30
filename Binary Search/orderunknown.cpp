
.
int binarySearch(int arr[], int start, int end, int x)
{
 
    
    bool isAsc = arr[start] < arr[end];
    while (start <= end) {
        int middle = start + (end - start) / 2;
 
      
        if (arr[middle] == x)
            return middle;
 

        if (isAsc == true) {
 

            if (arr[middle] < x)
                start = middle + 1;
 
            else
                end = middle - 1;
        }
 
    
        else {
 
          
            if (arr[middle] > x)
                start = middle + 1;
 
          
            else
                end = middle - 1;
        }
    }
 

    return -1;
}
 
