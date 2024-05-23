#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> &a, pair<int, int> &b)
{
   return (a.second < b.second);
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    int n;
    cin >>n;

    vector<pair<int, int>> movies(n);

    for(int i= 0; i<n; i++)
    {
        cin >> movies[i].first;
        cin >> movies[i].second;
    }

    sort(movies.begin(), movies.end(),comp);

    int cnt =1;
    int j =0;

    for(int i =1; i<n; i++)
    {
        if(movies[i].first >= movies[j].second)
        {
            cnt++;
            j =i;
        }
        else
        {
            continue;
        }
    }

    cout << cnt << endl;
    return 0;
}