//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dou;

#define endl "\n"
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

    ll r, b, p, q;
    cin >> r >> b >> p >> q;

    ll total_p = r * p;
    ll total_q = b * q;
    
    if(total_p > total_q)
        cout << total_p << endl;
    else
        cout << total_q << endl;
        
    return 0;
}
