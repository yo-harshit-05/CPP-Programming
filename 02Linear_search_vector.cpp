#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size,value=0;
    vector<int> num;
    cout<<"Enter size of Array"<<endl;
    cin>>size;
    cout<<"Enter value in Array"<<endl;
    for (int i=0;i<size;i++){
        cin>>value;
        num.push_back(value);
    }
    for(int i = 0; i < num.size(); i++)
    cout << num[i]<<" ";
    cout<<endl;
    int target;
    cout<<"Enter the target you want to find"<<endl;
    cin>>target;
    for(int i=0;i<num.size();i++){
        if (num[i]==target){
            cout<<"The element found at "<<i+1<<" position"<<endl;
            return 0;
        }
    }
    cout<<"Result not found";
    return 0;
}