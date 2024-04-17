#include <bits/stdc++.h>
using namespace std;
// SAKIB-22201185; I include comments to make someone understand my code.
// HAPPY CODING
#define ll long long
//solve 2
#define endl "\n"
#define ull unsigned long long int
#define fastios                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main() {
    int N;
    cin >> N;

    vector<int> players(N);
    for (int i = 0; i < N; i++) {
        cin >> players[i];
    }

    int B;
    cin >> B;

    // Swap the pointings
    swap(players[N - 1], players[B - 1]);

    // Print the order of the players
    for (int i = 0; i < N; i++) {
        cout << players[i] << " ";
    }

    return 0;
}