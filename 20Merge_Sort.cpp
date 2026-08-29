#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &nums,int st,int mid,int end){

    vector<int> temp;
    int i=st, j=mid+1;

    while(i<=mid && j<=end){
        if (nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }

    }

    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(nums[j]);
        j++;
    }

    for (int k=0;k<temp.size();k++){
        nums[k+st]=temp[k];
    }
}

void Merge_Sort(vector<int> &nums, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        Merge_Sort(nums, st, mid);
        Merge_Sort(nums, mid + 1, end);

        Merge(nums, st, mid, end);
    }
}

int main()
{
    vector<int> nums = {13, 53, 24, 78, 90, 43, 36};
    int st = 0;
    int end = nums.size() - 1;
    Merge_Sort(nums, st, end);
    for (int val : nums)
    {
        cout << val<<" ";
    }
    return 0;
}