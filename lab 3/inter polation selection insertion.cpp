#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define ull unsigned long long int

int n, inputs;
const int mx = 1e5 + 123;

// Interpolation Search
int interpolationSearch(int arr[], int n, int x)
{
    int low = 0, high = (n - 1);
    while (low <= high && x >= arr[low] && x <= arr[high])
    {
        if (low == high)
        {
            if (arr[low] == x)
                return low;
            return -1;
        }
        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]));
        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

void selec_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] <= arr[minIndex])
                minIndex = j;
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] >= temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{

    cin >> n;
    int arr[mx];
    cin >> inputs;
    for (int i = 0; i < inputs; i++)
        cin >> arr[i];
    if (n % 2 == 0)
    {
        // selection
        selec_Sort(arr, inputs);
        for (int i = 0; i < inputs; i++)
            cout << arr[i] << " ";
    }
    else
    {
        // insertion
        insertion(arr, inputs);
        for (int i = 0; i < inputs; i++)
            cout << arr[i] << " ";
    }
    int x;
    cout << "\nkonta lagbe bolen :";
    cin >> x;
    int index = interpolationSearch(arr, n, x);
    if (index != -1)
        cout << "at index " << index + 1;
    else
        cout << "Element not found.";
    return 0;
}