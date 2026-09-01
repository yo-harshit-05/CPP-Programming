#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> nums={13,24,20,9,46,52};
    int lst=nums.size()-1;
    int i=0,j=1;
    while(lst>=1){
        if(nums[i]>nums[j]){
            swap(nums[i],nums[j]);
        }
        i++;
        j++;
        if(j>lst){
            lst--;
            i=0;
            j=1;
        }
    }
    for (int val:nums){
        cout<<val<<" ";
    }
}