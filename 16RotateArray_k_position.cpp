#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={3,4,6,1,4,2,5,1};
    int k;
    cout<<"Enter Value of k"<<endl;
    cin>>k;
    int sz=vec.size();
    k=k%sz;
    while (k>0){
        int temp=vec[sz-1];
        for(int i=sz-1;i>0;i--){
            vec[i]=vec[i-1];
        }
        vec[0]=temp;
        k--;
        
    }
    for(int val:vec){
        cout<<val<<" ";
    }
}