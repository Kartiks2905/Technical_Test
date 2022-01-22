#include <bits/stdc++.h>
using namespace std;

// i -> iterator
// String 3 -> Empty String to store output strings.

void FindInterLeavings(char *string1, char *string2, char *string3, int m, int n, int i)
{
    // m and n are size of string 1 and 2 respectively
    if (m == 0 && n == 0)
        cout << string3 << endl;

    // If some character are left in string1 then include the first character and use recursion for the rest.
    if (m != 0)
    {
        string3[i] = string1[0];
        FindInterLeavings(string1, string2, string3, m - 1, n, i + 1);
    }

    // If some character are left in string2 then include the first character and use recursion for the rest.
    if (n != 0)
    {
        string3[i] = string2[0];
        FindInterLeavings(string1, string2, string3, m, n - 1, i + 1);
    }
}

// Function For printing the strings
void Print(char *string1, char *string2, int n, int m)
{
    // Allocating memory to the output string.
    char *string3 = new char[((m + n + 1) * sizeof(char))];

    string3[m + n] = '\0';

    FindInterLeavings(string1, string2, string3, m, n, 0);
    cout << endl;

    // free the memory due to memory leak problem.
    free(string3);
}
int main()
{
    char s1[] = "KD";
    char s2[] = "ML";

    Print(s1, s2, strlen(s1), strlen(s2));
    return 0;
}