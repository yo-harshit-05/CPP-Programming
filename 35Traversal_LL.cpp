#include<iostream>
#include <vector>
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
    vector<int> nums={4,7,1,3,5,2,6};
    Node* head=new Node(nums[0]);
    Node* mover=head;
    for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    Node* temp=head;
    while(temp){
        cout<<temp->value<<endl;
        temp=temp->next;
    }

}