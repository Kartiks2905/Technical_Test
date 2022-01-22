#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int> &arr1, vector<int> &arr2)
{
    // Checking if the size of array2 is smaller or not
    if (arr2.size() < arr1.size())
        return MedianOfArrays(arr2, arr1);

    // Size of Array1
    int n1 = arr1.size();
    // Size of Array2
    int n2 = arr2.size();

    // Index starting
    int low = 0;
    // Index Ending
    int high = n1;

    // Keeping the iterators inside the bound
    while (low <= high)
    {
        // Making cuts for comparing two arrays
        int cut1 = (low + high) >> 1;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        // Left Side Cuts
        int left1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];

        // Right Side Cuts
        int right1 = cut1 == n1 ? INT_MAX : arr1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : arr2[cut2];

        if (left1 <= right2 && left2 <= right1)
        {
            // If size of both the arrays are even (after addition)
            if ((n1 + n2) % 2 == 0)
                return (max(left1, left2) + min(right1, right2)) / 2.0;

            // If size of array is odd (after addition)
            else
                return (max(left1, left2));
        }
        else if (left1 > right2)
            high = cut1 - 1;

        else
            low = cut1 + 1;
    }
    return 0.0;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {5, 6, 7};
    cout << MedianOfArrays(arr1, arr2);
    return 0;
}