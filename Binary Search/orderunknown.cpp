#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int x){

    //To find whether order is ascending or descending

    bool isAsc(arr[start]<arr[end]){
        while(start<=end){
        int mid = start+(end-start)/2;
        
        //Checking key value=x is present at mid
        if(arr[mid==x]){
            return mid;
        }
        //array in ascending order or not
        if(isAsc==true){
        
        //Applying the binary search on ascending order array
        if(arr[mid]<x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        }
        //Applying the binary search on ascending order
        else{
            if(arr[mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return mid;
        }


    }
}
 
    
    