#include <iostream>
using namespace std;
int sumvalue(int n){
    if (n==0){
        return 0;
    }
    return n+sumvalue(n-1);

}
int main(){
    int n=10;
    cout<<sumvalue(n);
}