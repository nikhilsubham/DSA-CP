#include<bits/stdc++.h>
using namespace std;


// This solution works for both positive and negative numbers.
// Instead of n we can take any k here.
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n;
    cin >> n;

    vector<long long int>arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<long long int, vector<long long int>> mp;
    long long int sum =0;
    long long int remainder =0;
    long long int cnt =0;
    mp[0].push_back(-1);

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
        remainder = sum % n;

        if(remainder < 0)
            remainder += n;

        if(mp.find(remainder) != mp.end())
        {
            cnt +=  mp[remainder].size();
        }

        mp[remainder].push_back(i);
    }

    cout << cnt << endl;
    return 0;
}