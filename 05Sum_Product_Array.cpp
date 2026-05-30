// Function to print sum and product in array

#include <iostream>
using namespace std;
int sum(int a[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=a[i];
    }
    return sum;
}
int product(int a[],int size){
    int product=1;
    for (int i=0;i<size;i++){
        product*=a[i];
    }
    return product;
}
    int main(){
        int size;
        cout<<"Enter size of array";
        cin>>size;
        int a[size];
        cout<<"Enter array values"<<endl;
        for (int i=0;i<size;i++){
            cin>>a[i];
        };
        for (int i:a)
        {
            cout<<i<<",";
        }
        
        cout<<"\nThe Sum of Array is : "<<sum(a,size)<<endl;
        cout<<"The Product of Array is : "<<product(a,size)<<endl;
    }