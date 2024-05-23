#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n,x;
    cin >> n >> x;

    vector<pair<long long int, long long int>>nums(n);

    for(int i=0; i<n; i++)
    {
        cin >> nums[i].first;
        nums[i].second = i+1;
    }

   sort(nums.begin(), nums.end());

    for(int i=0; i<n-2; i++)
    {
        int j = i+1;
        int k = n-1;

        while(j < k)
        {
            if(nums[i].first + nums[j].first + nums[k].first == x)
            {
                cout << nums[i].second <<" "<< nums[j].second << " " << nums[k].second <<endl;
                return 0;
            }

            else if(nums[i].first + nums[j].first + nums[k].first  >  x)
               k--;

            else
                j++;
        }
    }

    cout <<"IMPOSSIBLE" << endl;
    return 0;
}
