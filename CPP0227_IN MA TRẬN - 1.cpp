#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


void in(int a[][101],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
}

int main() {
    quick();
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin >> n;
        int a[101][101];
        in(a,n,n);
        int l,r;
        for(int i=0;i<n;i++)
        {
            if(i % 2 ==0)for(int j=0;j<n;j++)cout << a[i][j] << " ";
            else for(int j=n-1;j>=0;j--)cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
/*

*/
