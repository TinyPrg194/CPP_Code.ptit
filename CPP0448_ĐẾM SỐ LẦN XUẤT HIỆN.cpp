#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k  ;
        map <int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;cin >> x;
            mp[x]++;
        }
        if(mp[k])cout << mp[k] << endl;else cout << "-1" << endl;
    }
}
/*

*/
