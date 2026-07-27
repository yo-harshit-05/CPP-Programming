#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr={1,2,2,1,1};
    int sz=arr.size();
    int ans=0;
    for (int element:arr){
        int count=0;
        for(int i=0;i<sz;i++){
            if (arr[i]==element){
                count++;
            }
        }
        if(count>sz/2){
            ans=element;
            break;
        }
    }
    cout<<"The Majority Element is "<<ans<<endl;

}