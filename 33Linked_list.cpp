#include <iostream>
using namespace std;
struct Node{
    int value;
    Node* next;
    Node(int value1){
        value=value1;
        next=nullptr;
    } 
};
int main(){
    Node* root= new Node(10);
    cout<<root->value;
}