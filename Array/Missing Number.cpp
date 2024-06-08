# Given an array nums containing n distinct numbers in the range [0, n],
  return the only number in the range that is missing from the array.

  //Approach 1:-Compare the nums array with distinct numbers and return the number that is not present in the array

  //array={0.1.3}
  //distinct numbers={0,1,2,3}
  //compare both and return the number which is missing

  //Time complexity:O(n^2)

  class Solution {
public:

//make the search function

bool search(vector<int>&nums,int val){
    int n=nums.size();
    //Search the val is present inside the nums or not
    for(int i=0;i<n;i++){
        if(nums[i]==val){
         return true;
        }
    }
    return false;

    
};

int missingNumber(vector<int>& nums) {
        //[0,1,2,3]//distinct numbers
        //nums=[0,1,3]//array
        //find the missing element in the array
        int n=nums.size();
        for(int i=0;i<=n;i++){
            //search which number is not present in the nums array and return that number
            if(search(nums,i)==false){
                return i;
            }
        }
        return -1;
    }

};

//Approach 2:Find the difference between the sum of the nums array and Sum of the distinct number , the diff between the two gives the missing element
//array={0,1,3}
//sum of array=4
//distinct numbers={0,1,2,3}
//Sum of numbers=6
//diff=6-4
    //=2(which is the missing element)

 //Time complexity:O(n)

    class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        //traverse the array & find the sum of array
        int sum0fArray=0;
        for(int i=0;i<n;i++){
            sum0fArray=sum0fArray+nums[i];
        }
        //Tranverse the numbers & Find the sum of numbers
        int sumOfdistinctNumbers=0;
        for(int i=0;i<=n;i++){
              sumOfdistinctNumbers= sumOfdistinctNumbers+i;
        }

        //Find the difference between sum of numbers and the sum of array
        int diff= sumOfdistinctNumbers-sum0fArray;
         
         return diff;
    }
    

};
