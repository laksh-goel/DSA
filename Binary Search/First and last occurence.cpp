//Using binary search
class Solution {
public:
int searchRangefirst(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int res=-1;
        while(start<=end){
            //Searching the first occurence of an element
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
                res=mid;
                end=mid-1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }

        }
         return res;
    };

    int searchRangelast(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int res=-1;
        while(start<=end){
            //Searching the last occurence of an element
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
                res=mid;
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }

        }
        return res;
        
};
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        //function call
        int firstocc= searchRangefirst(nums,target);
        int lastocc= searchRangelast(nums,target);
        result.push_back(firstocc);
        result.push_back(lastocc);

        return result;
    }
};