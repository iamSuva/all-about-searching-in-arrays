#include <bits/stdc++.h>
using namespace std;
int binary_search(int *a, int n, int x)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin >> k;
        int index = binary_search(arr, n, k);
        if (index == -1)
        {
            cout << k << " is not found" << endl;
        }
        else
        {
            cout << k << " is found at index " << index << endl;
        }
    }
    return 0;
}