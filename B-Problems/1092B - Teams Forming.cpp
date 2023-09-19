#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int sol = 0;

    for (int i = 0; i < n - 1; i+=2)
    {
        if(arr[i] != arr[i+1])
        {
            if (arr[i] < arr[i + 1])
            {
                sol += arr[i + 1] - arr[i];
            }
            else
            {
                sol += arr[i] - arr[i - 1];
            }
        }

    }

    cout << sol;
}