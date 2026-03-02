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
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for(auto& i : a) cin >> i;

        sort(a.begin(), a.end());
        auto found_x = find(a.begin(), a.end(), x);
        
        if(found_x != a.end())
            cout << "Yes" << el;
        else{
            if(x < a.front() || x > a.back())
                cout << "Yes" << el;
            else
                cout << "No" << el;
        } 
    }
    
    return 0;
}
