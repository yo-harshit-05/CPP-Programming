#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums={5,2,1,2,5};
    int i=0,j=nums.size()-1;
    while(i<=j){
        if (nums[i]!=nums[j]){
            cout<<false;
        }
        i++;
        j--;
    }cout<<true;
    return 0;
}