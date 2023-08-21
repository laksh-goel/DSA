#WAP to reverse an array or a string using c++:
#include<stdio.h>
using namespace std;
int main(){
class Solution
{
    public:
    string reverseWord(string str)
    {
         int n=str.length();
        int start=0,end=n-1;
        while(start<end){
            char a =str[end];
                str[end]=str[start];
               str[start]=a;
               start++;
               end--;
                
            }
            return str;
    }
};
}
