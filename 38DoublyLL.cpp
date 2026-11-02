#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

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

int main() {
    vector<int> nums = {2, 6, 4, 1, 7, 9, 2, 5};

    Node* head = arr_to_ll(nums);

    Node* tail = head;

    cout << "Forward: ";
    while (tail->next) {
        cout << tail->data << " ";
        tail = tail->next;
    }
    cout << tail->data << endl; // print last node

    cout << "Backward: ";
    while (tail) {
        cout << tail->data << " ";
        tail = tail->prev;
    }

    return 0;
}