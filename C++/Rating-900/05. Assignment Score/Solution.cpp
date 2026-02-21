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
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;

        ll marks = 0;
        for(auto i : a)
            marks += i;

        ll marks_need = (((n + 1) * 100)/2) - marks;
        if(marks_need > 100)
            cout << -1 << el;
        else if(marks_need <= 0)
            cout << 0 << el;
        else
            cout << marks_need << el;
    }
    
    return 0;
}
