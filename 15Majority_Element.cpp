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


// Method 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> arr={1,1,1,2,5,2,3,3,3,3,3,3,3,3,3,4,4};
    sort(arr.begin(),arr.end());
    int sz=arr.size();
    int count=1,ans=0;
    for(int i=1;i<sz;i++){
        if (arr[i]==arr[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if (count>sz/2){
            ans=arr[i];
            break;
        }


    }
    cout<<ans;
}
