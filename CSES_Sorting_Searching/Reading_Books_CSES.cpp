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
    vector<long long int> bookTime(n);
    long long int sum =0;

    for(int i =0; i<n; i++)
    {
       cin >> bookTime[i];
       sum += bookTime[i];
    }

    long long int maxTime1 = *max_element(bookTime.begin(), bookTime.end());

    cout << max(2*maxTime1, sum) << endl;

    return 0;
}