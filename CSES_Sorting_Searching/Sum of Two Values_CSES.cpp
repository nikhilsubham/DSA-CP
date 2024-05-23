#include<bits/stdc++.h>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    map<int, int> mp;
    int n, x;

    cin >> n >>x;
    vector<int>nums(n);

    for(int i =0; i<n; i++)
    {
       cin >> nums[i];
    }


    bool flag = true;
    for (int i = 0; i < n; i++) 
    {
        if (flag) 
        {
            if (mp.find(x - nums[i]) != mp.end()) 
            {
                cout << (*(mp.find(x - nums[i]))).second << " " << i + 1;
                flag = false;
            }
            mp.insert({ nums[i], i + 1 });
        }
    }
    if (flag)
        cout << "IMPOSSIBLE";
    return 0;
 }