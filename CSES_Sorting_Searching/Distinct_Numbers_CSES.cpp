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

    set<int> nums;

    for(int i =0; i<n; i++)
    {
       int item;
       cin>> item;
       nums.insert(item);
    }
    cout <<nums.size() <<endl;
    return 0;
}