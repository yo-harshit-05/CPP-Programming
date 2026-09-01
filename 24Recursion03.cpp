#include <iostream>
using namespace std;
void printvalue(int n){
    if (n<=0){
        return;
    }
    printvalue(n-1);
    cout<<n<<endl;
}
int main(){
    int n=10;
    printvalue(n);
    return 0;
}