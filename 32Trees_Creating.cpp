#include <iostream>
#include<algorithm>
using namespace std;
struct Node{
    int value;
    Node* left;
    Node* right;
    Node(int n): value(n),left(nullptr),right(nullptr){}
};
int main(){
    Node* root= new Node(10);
    root->left= new Node(5);
    root-> right = new Node(15);
    cout<<root->value<<endl;
    cout<<root->left->value<<endl;
    cout<<root->right->value<<endl;
}