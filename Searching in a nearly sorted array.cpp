//using linear search
int linearSearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
//time complexity:O(n)
//space complexity:O(1)

//using binary search
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        
        if (arr[mid] == x)
            return mid;
        if (mid > l && arr[mid - 1] == x)
            return (mid - 1);
        if (mid < r && arr[mid + 1] == x)
            return (mid + 1);
 
        
        
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 2, x);
 
        
        return binarySearch(arr, mid + 2, r, x);
    }
 

    return -1;
}
 