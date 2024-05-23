#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    int n, x;
    cin >> n >>x;

    vector<int>weights(n);

    for(int i=0; i<n;i++)
       cin >> weights[i];
    
    sort(weights.begin(), weights.end());

    long long int cnt = 0;
    int h = n-1, l =0;

    while(h >= l)
    {
       if(weights[h] + weights[l] <= x)
       {
         cnt++;
         h--;
         l++;
       }

       else
       {
         cnt++;
         h--;
       }
    }

    cout<< cnt << endl;
    return 0;
}


