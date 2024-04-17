#include <bits/stdc++.h>
using namespace std;
// SAKIB-22201185; I include comments to make someone understand my code.
// HAPPY CODING
#define ll long long
//solve 3
#define endl "\n"
#define ull unsigned long long int
#define fastios                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main() {
    // input number of disks
    int N;
    cin >> N;

    // input  diameters of the disks
    vector<int> disks(N);
    for (int i = 0; i < N; i++) {
        cin >> disks[i];
    }

    // Initialing rod named empty stack
    stack<int> rod;
    //number of moves as 0
    int moves = 0;

    // For each disk
    for (int i = 0; i < N; i++) {
        // Initialize a temporary stack
        stack<int> temp;
        // While the rod is not empty and the top disk on the rod is smaller than the current disk
        while (!rod.empty() && rod.top() < disks[i]) {
            // Move the top disk from the rod to the temporary stack
            temp.push(rod.top());
            rod.pop();
            // Increase the number of moves
            moves++;
        }
        // putting the current disk on the rod
        rod.push(disks[i]);
        // Increase the number of moves
        moves++;
        // While the temporary stack is not empty
        while (!temp.empty()) {
            // Move the top disk from the temporary stack to the rod
            rod.push(temp.top());
            temp.pop();
            // Increase the number of moves
            moves++;
        }
    }

    // counted the moves and printed the moves
    cout << moves << endl;

    //  empty vector to store the order of the disks
    vector<int> order;
    // While the rod is not empty
    while (!rod.empty()) {
        // Add the top disk from the rod to the order
        order.push_back(rod.top());
        // Remove the top disk from the rod
        rod.pop();
    }

    // disks from bottom to top
    for (int i = order.size() - 1; i >= 0; i--) {
        cout << order[i] << " ";
    }

    return 0;
}