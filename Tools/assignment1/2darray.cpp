#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[3][2], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
}

int main()
{
    int m = 3, n = 2;
    int arr[3][2] = {{2, 3}, {5, 6}, {7, 8}}; // Corrected initialization
    printArr(arr, m, n);
    return 0;
}
