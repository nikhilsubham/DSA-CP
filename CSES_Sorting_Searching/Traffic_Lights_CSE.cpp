#include<bits/stdc++.h>
using namespace std;

// Time complexity : O(N^2(logN))
// void solve(){
//     int x , n;
//     cin>>x>>n;
//     vector<int> a = {0 , x};
//     for(int i = 0; i<n; i++){
//         int no;
//         cin>>no;
//         a.push_back(no);
//         int ans = 0;
//         sort(a.begin() , a.end());
//         for(int i = 0;i<a.size(); i++){
//             ans = max(ans , a[i] - a[i-1]);
//         }
//         cout<<ans<<" ";

//     }


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    long long int x, n;
    cin >> x >> n;

    set<long long int> position;
    multiset<long long int> length;

    //now putting the initial lengths in the position set
    position.insert(0);
    position.insert(x);

    //and now substitutinh the lengths difference into the length array
    length.insert(x - 0);

    //scanning each value
    for(int i = 0; i<n; i++)
    {
        int no;
        cin>>no;
        position.insert(no);
        auto it = position.find(no);

        int previousVal = *prev(it);
        int nextVal = *next(it);

        length.erase(length.find(nextVal - previousVal));

        length.insert(no - previousVal);
        length.insert(nextVal - no);

        cout<<*length.rbegin()<<" ";
    }

    return 0;
}