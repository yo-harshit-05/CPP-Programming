#include <iostream>
using namespace std;
void printvalue(int n){
    if(n<=0){
        return;
    }
    cout<<n<<endl;
    printvalue(n-1);
}
int main(){
    int n=10;
    printvalue(n);
    return 0;
}