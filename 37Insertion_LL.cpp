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
Node* arr2LL(vector<int> nums){
    Node* head=new Node(nums[0]);
    Node* mover=head;
    for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp; 
    }
    return head;
}
void traverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
Node* insert_head(Node* head,int ele){
    Node* temp=new Node(ele);
    temp->next=head;
    head=temp;
    return head;
}
Node* insert_tail(Node* head,int ele){
    Node* node=new Node(ele);
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=node;
    return head;
}

int main(){
    vector<int> nums={4,7,2,4,7,2,1,8,9};
    Node* head=arr2LL(nums);
    head=insert_head(head,19);
    head=insert_tail(head,20);
    traverse(head);
}