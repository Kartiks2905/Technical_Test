// 1. Write a method void printArray(int[][]arr)
// Prints array elements clock wise and anti-clockwise alternatively.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int row_start = 0;
    int row_end = row - 1;
    int col_start = 0;
    int col_end = col - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // For Row_Start
        for (int col = col_start; col <= col_end; col++)
        {
            cout << matrix[row_start][col] << " ";
        }
        row_start++;

        // For Coulmn_end

        for (int row = row_start; row <= row_end; row++)
        {
            cout << matrix[row][col_end] << " ";
        }
        col_end--;

        // For Row_end

        for (int col = col_end; col >= col_start; col--)
        {
            cout << matrix[row_end][col] << " ";
        }
        row_end--;

        // For Coulmn_Start

        for (int row = row_end; row >= row_start; row--)
        {
            cout << matrix[row][col_start] << " ";
        }
        col_start++;
    }

    
    cout << endl;
    cout << endl;


    row_start = 0;
    row_end = row - 1;
    col_start = 0;
    col_end = col - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // For Row_Start
        for (int col = col_end; col >= col_start; col--)
        {
            cout << matrix[row_start][col] << " ";
        }
        row_start++;

        // For Coulmn_end

        for (int row = row_start; row <= row_end; row++)
        {
            cout << matrix[row][col_start] << " ";
        }
        col_start++;

        // For Row_end

        for (int col = col_start; col <= col_end; col++)
        {
            cout << matrix[row_end][col] << " ";
        }
        row_end--;

        // For Coulmn_Start

        for (int row = row_end; row >= row_start; row--)
        {
            cout << matrix[row][col_end] << " ";
        }
        col_end--;
    }

    return 0;
}