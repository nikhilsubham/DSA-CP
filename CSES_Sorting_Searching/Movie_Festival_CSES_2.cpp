#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long int,long long int> &a, pair<long long int, long long int> &b)
{
   return (a.second < b.second);
}

//Needs to do it with upper bound as well without inserting negative values.
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    int n,k;
    cin >>n >>k;

    vector<pair<long long int, long long int>> movies(n);
    set<pair<long long int, long long int>> st;

    for(int i= 0; i<n; i++)
    {
        cin >> movies[i].first;
        cin >> movies[i].second;
    }

    sort(movies.begin(), movies.end(),comp);

    int cnt = 1;
    st.insert({movies[0].second*-1, 0});

    for(int i =1; i<n; i++)
    {

      auto it = st.lower_bound({movies[i].first*-1, -1});

      if(it != st.end())
      {
         st.erase(it);
         st.insert({movies[i].second*-1, i});
         cnt++;
         continue;
      }
      
      if(st.size() < k)
      {
         cnt++;
         st.insert({movies[i].second*-1, i});
         continue;
      }

    }

    cout << cnt << endl;
    return 0;
}