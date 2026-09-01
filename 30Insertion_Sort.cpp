#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> nums={5,3,1,4,8,9};
    for (int i=0;i<nums.size()-1;i++){
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j-1],nums[j]);
            j--;
        }
    }
    for (int val:nums){
        cout<<val<<" ";
    }
}
