#include <bits/stdc++.h>
using namespace std;

vector<int> MaximumSizeWindow(vector<int> &arr, int k)
{
    // Array for storing Elements
    vector<int> ans;
    // Using Dequeue (Due to it's property of insertion and deletion at both end)
    deque<int> dq;

    for (int i = 0; i < arr.size(); i++)
    {
        if (!dq.empty() && dq.front() == i - k)
            dq.pop_front();

        while (!dq.empty() && arr[dq.back()] < arr[i])

            dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1)
            ans.push_back(arr[dq.front()]);
    }
    return ans;
}
// Function For Printing ELements 
void Print(vector<int> &arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
int main()
{
    vector<int> arr = {1, 2, -1, -2, 5, 3, 6, 8};
    int k = 3;

    vector<int> ans = MaximumSizeWindow(arr, k);
    Print(ans);
    return 0;
}