#include<bits/stdc++.h>
using namespace std;

bool isPossible(long long int minTime, long long int totalProducts, vector<long long int>&timeNeede)
{
     long long int products  = 0;

     for(int i=0; i<timeNeede.size(); i++)
     {
         products +=  minTime/timeNeede[i];
     }

     if(products >= totalProducts)
        return true;

    return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n,t;
    cin >> n >> t;

    vector<long long int> timeNeede(n);

    for(int i=0; i<n; i++)
    {
        cin >> timeNeede[i];
    }

    long long int minTime = *min_element(timeNeede.begin(), timeNeede.end());
    long long int maxTime = minTime * t;
    long long int ans = -1;

    while(minTime <= maxTime)
    {
        long long int mid = minTime + (maxTime - minTime)/2;

        if(isPossible(mid, t, timeNeede))
        {
            ans = mid;
            maxTime = mid-1;
        }
        else
        {
          minTime = mid+1;  
        }
        
    }

    cout << ans << endl;
    return 0;
}