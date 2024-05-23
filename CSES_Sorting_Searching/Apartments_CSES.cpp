#include<bits/stdc++.h>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

	int n ,m, k;
	cin >>n >>m >>k;

	vector<int>Applicants(n);
	vector<int>Apartments(m);

	for(int i=0; i<n; i++)
		cin >> Applicants[i];  

	for(int i=0; i<m; i++)
		cin >> Apartments[i];

    sort(Applicants.begin(), Applicants.end());  
    sort(Apartments.begin(), Apartments.end());

    int cnt =0;
    int j =0;

    for(int i=0; i<n; i++)
    {
    	if(j == m)
    		break;

    	if(Apartments[j]  < Applicants[i]-k)
    	{
    		j++;
    	    i--;
    	}

    	else if(Apartments[j] >  Applicants[i] + k)
    	{
    		continue;
    	}

    	else
    	{
    		cnt = cnt +1;
    		j++;
    	}
    }

    cout << cnt << endl;
	return 0;
}