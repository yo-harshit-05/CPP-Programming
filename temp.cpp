#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr={2,3,4,7,9,12,45,78,90};
    int target=7;
    int low=0,high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    cout<<ans;

}