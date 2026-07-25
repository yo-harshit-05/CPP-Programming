#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr={2,7,11,15};
    vector <int> res;
    int sz=arr.size(),target=18;
    for(int i=0;i<sz;i++){
        for (int j=i+1;j<sz;j++){
            if(arr[i]+arr[j]==target){
                res.push_back(arr[i]);
                res.push_back(arr[j]);
            }

        }
    }
    cout<<res[0]<<","<<res[1]<<endl;
}