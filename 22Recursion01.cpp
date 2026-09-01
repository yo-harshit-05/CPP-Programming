#include <iostream>
using namespace std;
void printname(string name,int count){
    if(count<=0){
        return;
    }
    cout<<name<<endl;
    printname(name,count-1);
}
int main(){
    string name={"Harshit"};
    int count=5;
    printname(name,count);
}