#include<bits/stdc++.h>
using namespace std;

//Can easily be done with priority queue as well rather than set.
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n;
    cin >> n;


    vector<vector<long long int>> bookings(n, vector<long long int>(3));    
    for (int i = 0; i < n; i++)
    {
        cin >> bookings[i][0] >> bookings[i][1];
        bookings[i][2] = i;
    }

    sort(bookings.begin(), bookings.end());
    int room = 0;
    vector<long long int> booked(n);
    set<pair<long long int, long long int>> emptyRoom;

    for (int i = 0; i < n; i++)
    {
        if (emptyRoom.empty())
        {
            room++;
            emptyRoom.insert({bookings[i][1], room});
            booked[bookings[i][2]] = room;
        }
        else
        {
            auto it = emptyRoom.begin();
            pair<int, int> firstDeparture = *it;

            if (firstDeparture.first < bookings[i][0])
            {
                emptyRoom.erase(*it);
                emptyRoom.insert({bookings[i][1], firstDeparture.second});
                booked[bookings[i][2]] = firstDeparture.second;
            }

            else
            {
                room++;
                emptyRoom.insert({bookings[i][1], room});
                booked[bookings[i][2]] = room;
            }
        }
    }
    cout << room << "\n";
    for (int i = 0; i < n; i++)
        cout << booked[i] << " ";

    return 0;
}