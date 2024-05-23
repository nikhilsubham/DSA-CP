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

    vector<long long int> arr(n);
    set<int> st;
    int start = 0;
    int ans = 0;

    for(int i=0; i<n; i++)
      cin >> arr[i];

    for(int i=0; i<n; i++)
    {
        while(st.count(arr[i]))
        {
            st.erase(arr[start]);
            start++;
        }
        st.insert(arr[i]);
        ans = max(ans, (int)st.size());
    }

    cout << ans << endl;
    return 0;
}