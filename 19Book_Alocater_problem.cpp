#include<iostream>
#include <vector>
using namespace std;

bool is_valid(vector<int> arr,int maxallowed,int m,int n){
    int pages=0,stu=1;
    for (int i=0;i<n;i++){
        if(arr[i]>maxallowed){
            return false;
        }
        if (pages+arr[i]<=maxallowed){
            pages+=arr[i];
        }
        else{
            stu++;
            pages=arr[i];
        }
    }
    if (stu>m){
        return false;
    }
    else {
        return true;
    }


}
int allocateBooks(vector <int> &arr,int n,int m){
    if (m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int st=0,end=sum;
    int ans=-1;
    while (st<=end){
        int mid=st+(end-st)/2;
        if (is_valid(arr,mid,m,n)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;

}

int main(){
    vector <int> arr={2,1,3,4};
    int n=4,m=2;
    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}