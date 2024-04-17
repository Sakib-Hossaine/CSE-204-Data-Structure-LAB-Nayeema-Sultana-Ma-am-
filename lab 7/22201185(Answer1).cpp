#include <bits/stdc++.h>
using namespace std;
// SAKIB-22201185; I include comments to make someone understand my code.
// HAPPY CODING
#define ll long long
//solve 1
#define endl "\n"
#define ull unsigned long long int
#define fastios                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    fastios;
    int N;
    cin >> N;

    queue<int> players;
    vector<int> sorted_players(N);
    for (int i = 0; i < N; i++)
    {
        int player;
        cin >> player;
        players.push(player);
        sorted_players[i] = player;
    }

    sort(sorted_players.begin(), sorted_players.end());

    int screams = 0;
    int index = 0;
    while (!players.empty())
    {
        if (players.front() == sorted_players[index])
        {
            players.pop();
            index++;
        }
        else
        {
            players.push(players.front());
            players.pop();
            screams++;
        }
    }

    cout << screams << endl;

    return 0;
    /*
      1.Read the number of players.
      2.Read the list of players and push them into a queue.
      3.Initialize a counter for the number of times the phrase is screamed.
      4.While the queue is not empty, check the front of the queue.
      5.If the front of the queue is the smallest number in the queue, pop it from the queue.
      6.Otherwise, move the front of the queue to the back and increment the counter.
      7.Repeat steps 4-6 until the queue is empty.
      8.Print the counter.
    */
}