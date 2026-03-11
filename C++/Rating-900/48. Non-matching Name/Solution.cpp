//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dou;

#define el "\n"
#define PI (2.0 * acos(0.0))

inline int ceil(int a, int b){
return (a + b - 1) / b;
}
inline int abs (int a, int b){
int d1 = a - b;
if (d1 < 0) d1 *= -1;
return d1;
}
bool comp(int a, int b) {
return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n, m;
        cin >> n >> m;

        string sa;
        cin >> sa;

        string sb;
        cin >> sb;
        
        map<char, ll> ma;
        for(ll i = 0; i < sa.size(); i++)
            ma[sa[i]]++;

        for(ll i = 0; i < sb.size(); i++)
            ma[sb[i]]++;

        if(ma.size()== 26)
            cout << "No" << el;
        else    
            cout << "Yes" << el;

    }

    return 0;
}
