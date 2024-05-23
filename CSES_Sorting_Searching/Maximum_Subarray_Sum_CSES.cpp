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

    long long int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    long long int maxSoFar =INT_MIN;
    long long int sumSoFar = 0;

    for(int i=0; i<n; i++)
    {
       if(arr[i] > sumSoFar  &&  sumSoFar <= 0)
       {
             sumSoFar = arr[i];
             maxSoFar = max(maxSoFar, sumSoFar);
       }

       else
       {
            sumSoFar +=  arr[i];
            maxSoFar = max(maxSoFar, sumSoFar); 
       } 
    }

    cout << maxSoFar << endl;
    return 0;
}