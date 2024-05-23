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

    sort(arr.begin(), arr.end());
    int ans =1;

    for(int i =1; i<n; i++)
    {
        if(arr[i-1].second > arr[i].second)
            ans++;
    }
    
    cout<< ans << endl;
    return 0;
}