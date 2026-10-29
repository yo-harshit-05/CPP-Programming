#include <iostream>
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
    vector<int> nums={2,5,3,6,9,1,4};
    Node* head=new Node(nums[0]);
    Node* mover=head;
    for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    cout<<head->value;
}