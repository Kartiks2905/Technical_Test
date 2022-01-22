// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, coulmn, target;
    cin >> row >> coulmn >> target;

    int matrix[row][coulmn];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int r = 0, c = row - 1;
    while (r < coulmn && c >= 0)
    {
        if (matrix[r][c] == target)
        {
            cout << "Element Found at -> " << r << " , " << c << endl;
            break;
        }
        else if (matrix[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    return 0;
}