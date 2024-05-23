#include<bits/stdc++.h>
using namespace std;


// This solution works for both positive and negative numbers.
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n,x;
    cin >> n >> x;

    vector<long long int>arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<long long int, vector<long long int>> mp;
    long long int cnt = 0;
    long long int sum =0;

    mp[0].push_back(-1);

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];

        if(mp.find(sum-x) != mp.end())
        {
           cnt = cnt + mp[sum-x].size(); 
        }

        mp[sum].push_back(i);
    }

    cout << cnt << endl;  
    return 0;
}