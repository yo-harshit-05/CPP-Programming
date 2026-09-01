#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums={5,2,1,2,5};
    vector<int> temp(nums.begin(),nums.end());
    reverse(temp.begin(),temp.end());
    if(nums==temp){
        cout<<true;
    }
    else cout<<false;
    return 0;
}