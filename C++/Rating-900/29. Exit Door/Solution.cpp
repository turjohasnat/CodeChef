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

    while (t--){
        ll n;
        cin >> n;

        vector<ll> p(n);
        vector<ll> pos(n + 1);
        
        for(ll i = 0; i < n; i++){
            cin >> p[i];
            pos[p[i]] = i;
        }

        ll dist = 0;
        vector<bool> occu(n, true);
        for(ll i = n; i > 0; i--){
            ll index = pos[i];

            ll l = 0;
            for(ll i = 0; i < index; i++)
                if(occu[i]) l++;
            
            ll r = 0;
            for(ll i = index + 1; i < n; i++)
                if(occu[i]) r++;

            dist += min(l, r);
            occu[index] = false;
            
        }

        cout << dist << endl;  
    }
    
    return 0;
}
