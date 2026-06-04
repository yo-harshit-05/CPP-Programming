#include <iostream>
#include <vector>
using namespace std;
int main (){
    int size;
    bool assc,desc=true;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter Values"<<endl;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>=arr[i+1]){
            assc=false;
        }
        if(arr[i]<=arr[i+1]){
            desc=false;
        }
    }
    if(assc||desc){
        cout<<"the array is sorted"<<endl;
    }
    else
        cout<<"the array is not sorted";
    
}