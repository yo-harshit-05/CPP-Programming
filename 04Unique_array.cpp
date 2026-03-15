#include <iostream>
#include <set>
using namespace std;
int main(){
    int arr[]={5,6,3,5,7,4,3,2,1,2,2,2,2,2};
    set<int> s;
    for (int i:arr){
        s.insert(i);
    }
    for (int j:s){
        cout<<j<<",";
    }
    return 0;
}