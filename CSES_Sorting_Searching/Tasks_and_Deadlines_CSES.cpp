#include<bits/stdc++.h>
using namespace std;


int main()
{
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    int n;
    cin >>n;

    vector<pair<int, int>> tasks(n);

    for(int i= 0; i<n; i++)
    {
        cin >> tasks[i].first;
        cin >> tasks[i].second;
    }

    sort(tasks.begin(), tasks.end());

   
    long long int currentTime = 0;
    long long int totalReward = 0;

    for (int i = 0; i < n; i++) {
        currentTime += tasks[i].first;
        totalReward += (tasks[i].second - currentTime);
    }

    cout << totalReward << endl;
    return 0;
 }