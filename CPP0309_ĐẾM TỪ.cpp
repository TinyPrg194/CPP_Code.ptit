#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main() {
    quick();
    int test;
    cin >> test;
    cin.ignore();
    while(test--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        int cnt = 0;
        while(ss >> tmp)
        {
            ++cnt;
        }   
        cout << cnt << endl;
    }
}
/*

*/
