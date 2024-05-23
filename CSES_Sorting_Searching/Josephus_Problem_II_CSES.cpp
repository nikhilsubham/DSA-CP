#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 

using namespace __gnu_pbds;
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif

    int n,k;
    cin>>n >>k;
    
    //using policy based data structure for ordered set
    ordered_set<int> oset;
    
    //inserting values in the set
    for(int i=1;i<=n;i++)oset.insert(i);
    
    //setting initial position
    int pos=k%n;
    
    //printing values until set is not empty
    while(!oset.empty()){
        
        //finding value at pos'th position
        int val = *oset.find_by_order(pos);
        
        //deleting this value
        oset.erase(val);
        
        //printing the value
        cout<<val<<' ';
        
        //finding next position
        if(!oset.empty()){
            pos=(pos+k)%oset.size();
        }
    }

    return 0;
}