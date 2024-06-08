# Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

//nums array={1,3,-4,0,-5,-2,6}
//so first sort the array
//sorted array={-5,-4,-2,0,1,3,6}
//So if array contains all positive numbers the product of last three elements gives the maximum product but
//if array contains both positive and negative or all negative numbers then the product as shown below give sthe maximum product

//Time complexity O(n log(n))

 class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);

    }
};