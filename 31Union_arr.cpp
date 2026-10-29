// #include<iostream>
// #include <vector>
// #include<set>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>arr1={1,1,2,3,4,5};
//     vector<int>arr2={2,3,4,4,5,6};
//     set <int> uni;
//     for(int val:arr1){
//         uni.insert(val);
//     }
//     for(int val:arr2){
//         uni.insert(val);
//     }
//     for(int val:uni){
//         cout<<val<<" ";
//     }
// }

#include<iostream>
#include <vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr1={1,1,2,3,4,5};
    vector<int>arr2={2,3,4,4,5,6};
    vector<int>ans;
    int i=0,j=0;
    while(i<arr1.size()-1 && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
            if(ans.size()==0|| ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0|| ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<arr1.size()){
        if(ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
        i++;
    }
    while(j<arr2.size()){
        if(ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
        j++;
    }

    for(int val:ans){
        cout<<val<<" ";
    }
}