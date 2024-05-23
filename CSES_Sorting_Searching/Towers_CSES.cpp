#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n;
    cin >> n;

    vector<pair<long long int, long long int>>arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }

   set<pair<int, int>>st;
   int cnt =0;

    for(int i =0; i<n; i++)
    {
         auto it = st.upper_bound(arr[i]);
         if(it != st.end())
         {
             st.erase(it);
         }
         else
            cnt++;
        st.insert(arr[i]);
    }
    
    cout<< cnt << endl;
    return 0;
}