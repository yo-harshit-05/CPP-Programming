// Reverse array using vector 
#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &arr) {
    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> arr;
    int size, value;

    cout << "Enter Array Size" << endl;
    cin >> size;

    cout << "Enter value for array" << endl;
    for(int i = 0; i < size; i++){
        cin >> value;
        arr.push_back(value);
    }

    reverseVector(arr);

    cout << "Reversed Array: ";
    for(int x : arr)
        cout << x << " ";

    return 0;
}