#include<bits/stdc++.h>
using namespace std;

bool isPossible(long long int sum, int k, vector<long long int>&arr)
{
    long long int cnt =1;
    long long int currSum =0;

    for(int i=0; i<arr.size(); i++)
    {
        currSum += arr[i];

        if(currSum > sum)
        {
            cnt++;
            currSum = arr[i];
        }    
    }

    if(cnt <= k)
        return true;

    return false;
}


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n,k;
    cin >> n >> k;

    vector<long long int>arr(n);
    long long int high =0;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        high = high + arr[i];
    }

    long long int low = *max_element(arr.begin(), arr.end());
    long long int ans  = INT_MAX;

    while(low <= high)
    {
        long long int mid = low + (high-low)/2;

        if(isPossible(mid, k, arr) == true)
        {
             ans = mid;
             high = mid-1;
        }

        else
        {
            low = mid+1;
        }
    }

    cout << ans << endl;
    return 0;
}