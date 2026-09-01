// #include <iostream>
// using namespace std;
// void printname(string name,int count){
//     if(count<=0){
//         return;
//     }
//     cout<<name<<endl;
//     printname(name,count-1);
// }
// int main(){
//     string name={"Harshit"};
//     int count=5;
//     printname(name,count);
// }



// #include <iostream>
// using namespace std;
// void printvalue(int n){
//     if (n<=0){
//         return;
//     }
//     printvalue(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n=10;
//     printvalue(n);
//     return 0;
// }

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