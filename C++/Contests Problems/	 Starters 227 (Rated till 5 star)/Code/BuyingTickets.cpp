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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;

        string s;
        cin >> s;

        ll rem_s = count(s.begin(), s.end(), '0');
        if(rem_s < k)
            cout << -1 << el;
        else{
            vector<ll> cost;
            for(ll i = 0; i < n; i++){
                if(s[i] == '0'){
                    cost.push_back(a[i]);
                }
            }

            sort(cost.begin(), cost.end());
            
            ll result = 0;
            for(ll i = 0; i < k; i++)
                result += cost[i];

            cout << result << el;
        }
    }
    
    return 0;
}
