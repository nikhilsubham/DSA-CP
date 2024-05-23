#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    vector<int>tickets(n);
    vector<int>customers(n);

    for(int i=0; i<n; i++)
        cin >> tickets[i];

    for(int i=0; i<n; i++)
        cin >> customers[i];

    map<int, int> pendingTickets;
    for (int i = 0; i < n; i++) {
        pendingTickets[tickets[i]] += 1;
    }

    for(int i = 0; i < m; i++) {
        auto it = pendingTickets.upper_bound(customers[i]);
        if (it == pendingTickets.begin()) {
            cout << -1 << "\n";
        }
        else {
            it--;
            cout << it->first << "\n";
            it->second -= 1;
            if (it->second == 0)
                pendingTickets.erase(it);
        }
    }

    return 0;
}