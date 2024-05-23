#include<bits/stdc++.h>
using namespace std;


// Important to understand why we cant use just set here.
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n,k;
    cin >> n >> k;

    vector<long long int>nums(n);

    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }

    long long int l=0,r=0, cnt=0;
    unordered_map <long long int, long long int> freq;

       while(r < nums.size())
       {
           freq[nums[r]]++;

           while(freq.size() > k)
           {
               freq[nums[l]]--;
               if(freq[nums[l]] == 0)
                  freq.erase(nums[l]);
               l = l+1;
           }

           if(freq.size() <= k)
             cnt = cnt + r-l+1;

           r = r+1;
       }

    cout << cnt << endl;
    return 0;
}