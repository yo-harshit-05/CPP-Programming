#include <iostream>
using namespace std;
int main(){
    int a[]={4,6,3,5,7,3,2,67,8};
    int gr1=a[0],gr2=a[0];
    for(int i:a){
        if(i>gr2){
            gr1=gr2;
            gr2=i;
        }
        else if(i>gr1 && i!=gr2){
            gr1=i;
        }
    }
    cout<<"The second greatest is :"<<gr1<<endl;
}