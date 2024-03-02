#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastios                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int mx = 1e5 + 123;
int binarySearch(int arr[], int n, int key)
{
	int start = 0;
	int end = n - 1;

	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (arr[mid] == key)
		{
			return mid+1;
		}
		else if (arr[mid] > key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}

	return -1;
}

int main()
{
	    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << binarySearch(arr, n, key) << endl;
}

//bubble sort and binary 
