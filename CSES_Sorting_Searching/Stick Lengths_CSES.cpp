#include<bits/stdc++.h>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    int n;
    cin >> n;

    vector<int> arr(n);
    long long int sum =0;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

   
    sort(arr.begin(), arr.end());
    int median = arr[n / 2];
    long long ans = 0;

    // Find the cost of individual stick
    for (int i = 0; i < n; i++) {
        ans += abs(median - arr[i]);
    }
    cout << ans << endl;

    return 0;
}