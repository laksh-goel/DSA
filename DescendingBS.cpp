class Solution {
public:
    int search(vector<int>& arra, int key value){
      int n=arr.size();
      int start=0;
      int end=n-1;

      while(start<=end){

        int mid=start+(end-start)/2;

        if(key value==arr[mid]){
          return mid;
        }
        else if(key value<arr[mid]){
          start=mid+1;
        }
        else{
          end=mid-1;
        }
      }
      return -1;

      }
}
};