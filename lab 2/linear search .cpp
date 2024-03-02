#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastios                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int mx = 1e5 + 123;


int main() {
    fastios;
        int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    
 
        if (arr[i] == key) {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << "Not found" << endl;

    return 0;
}