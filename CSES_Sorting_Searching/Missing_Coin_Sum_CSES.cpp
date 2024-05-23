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

    long long int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);
    long long int x = 1;

    for (int i = 0; i < n; i++) 
    {
        // If the current coin's value is greater than X,then X is the answer
        if (arr[i] > x) 
        {
             cout << x << endl;
             return 0;
        }
      
        // If current coin's value is less than or equal to
        // X, then we can update X as X + arr[i]
        x += arr[i];
    }
    cout << x << endl;

    return 0;
}