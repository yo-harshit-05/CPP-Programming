#include <iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int sz=7,maxsum=0;
    for (int st =0;st<sz;st++){
        int cursum=0;
        for (int end=st;end<=sz;end++){
            cursum+=arr[end];
            maxsum=max(cursum,maxsum);
            if(cursum<0){
                cursum=0;
            }
        }
    }
    cout<<maxsum<<endl;
return 0;
}