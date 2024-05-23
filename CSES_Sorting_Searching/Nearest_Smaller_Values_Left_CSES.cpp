#include<bits/stdc++.h>
using namespace std;

//Needs to maintain monotonically increasing stack.
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int n;
    cin >> n;

    vector<pair<long long int, long long int>>nums(n);

    for(int i=0; i<n; i++)
    {
        cin >> nums[i].first;
        nums[i].second = i+1;
    }

    stack<pair<int, int>> st;

    for(int i=0; i<n; i++)
    {
        if(st.empty())
        {   
            cout << 0 <<" ";
            st.push(nums[i]);
            continue;
        }

        if(st.top().first < nums[i].first)
        {
            cout << st.top().second << " ";
            st.push(nums[i]);
            continue;
        }

        while(st.empty() == false && st.top().first >= nums[i].first)
        {
            st.pop();
        }

        if(st.empty())
        {
            cout << 0 <<" ";
            st.push(nums[i]);
            continue;
        }

        if(st.top().first < nums[i].first)
        {
            cout << st.top().second << " ";
            st.push(nums[i]);
            continue;
        }
    }

    return 0;
}
