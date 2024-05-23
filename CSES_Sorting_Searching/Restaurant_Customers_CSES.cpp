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

    vector<pair<int,int>> pp;
    int start, end;
    for(int i=0; i<n; i++)
    {
         cin >> start;
         cin >> end;

         pp.push_back({start, 1});
         pp.push_back({end, -1});
    }

    sort(pp.begin(), pp.end());
    int cnt  =0;
    int ans =0;

    for(int i=0; i<pp.size(); i++)
    {
       if(pp[i].second == 1)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }  

        ans= max(ans,cnt);
    }

    cout << ans << endl;
    return 0;
}