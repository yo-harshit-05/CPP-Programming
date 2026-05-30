#include<iostream>
using namespace std;
int main(){
    int a[]={1,4,5,3,1};
    int greatest=a[0];
    for(int i:a){
        if(i>greatest){
            greatest=i;
        }
    }
cout<<"The greatest number is "<<greatest<<endl;
}