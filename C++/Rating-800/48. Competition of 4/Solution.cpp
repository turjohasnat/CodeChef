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

    ll x;
    cin >> x;

    if(x == 1 || x == 2)
        cout << 8000/x << el;
    else if(x == 3)
        cout << 8000/4 << el;
    else
        cout << 8000/8 << el;
    
    return 0;
}
