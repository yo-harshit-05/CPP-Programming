#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
Node* delete_head(Node* head){
    if( head ==nullptr || head->next==nullptr) return head;
    Node* temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;
    return head;
}

Node* delete_element(Node* head,int val){
    Node* mover=head;
    while(mover){
        // 4 5 6
        if(mover->data==val){
            Node* temp=mover;
            mover=mover->prev;
            mover->next=mover->next->next;
            mover->next->prev=mover;
            delete temp;
            return head;
        }
        mover=mover->next;
    }
    return head;
}
Node* arr_to_ll(vector<int> nums) {
    Node* head = new Node(nums[0]);
    Node* prev = head;

    for (int i = 1; i < nums.size(); i++) {
        Node* temp = new Node(nums[i]);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
    }
    return head;
}
int main(){
    vector<int> nums={4,5,7,2,7,0,1,35,3};
    Node*head;
    head=arr_to_ll(nums);
    head=delete_head(head);
    head=delete_element(head,35);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;

}