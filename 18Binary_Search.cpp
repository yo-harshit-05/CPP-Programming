// Find the paalindrome number
#include <iostream>
#include <vector>
using namespace std;
int binsearch(vector <int> nums,int start,int end,int target){
    int middle;
    while(start<=end){
        middle=(start+end)/2;
        if(target==nums[middle]){
            return middle;
        }
        else if(target<nums[middle]){
            return binsearch(nums,start,middle-1,target);
        }
        else if(target>nums[middle]){
            return binsearch(nums,middle+1,end,target);
        }
    }
    return -1;

}
int main(){
    vector <int> vec={-1,0,3,4,5,9,12};
    int sz=vec.size();
    int start=0,end=sz-1;
    int target=5;
    int ans =binsearch(vec,start,end,target);
    cout<<"Element found at "<<ans<<" index"<<endl;
    }