#include <iostream>
#include <vector>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* arr_to_LL(vector<int> nums){
    Node* head=new Node(nums[0]);
    Node* mover=head;
    for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* del_head(Node* head){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* del_tail(Node* head){
    Node* temp= head;
    if(head==nullptr||head->next==nullptr){
        delete head;
        return nullptr;
    }
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
void display(Node*head){
    if(head==nullptr) return;
    cout<<head->data<<" ";
    display(head->next);
}
Node* del_i(Node* head,int i){
    Node*temp=head;
    while(temp->next!=nullptr&& temp->next->data!=i){
        temp=temp->next;
        if(temp->next!=nullptr){
            Node* del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }
        return head;
    }
}
int main(){
    vector<int> nums={4,5,3,6,1,4,7};
    Node* head=arr_to_LL(nums);
    // cout<<del_tail(head)->data<<"\n";
    // cout<<del_tail(head)->data<<"\n";
    del_i(head,3);
    display(head);
}