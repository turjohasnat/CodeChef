//C++ Solution:
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dou;

#define endl "\n"
#define PI(2.0 * acos(0.0))

inline int ceil(int a, int b) {
    return (a + b - 1) / b;
}
inline int abs(int a, int b) {
    int d1 = a - b;
    if (d1 < 0) d1 *= -1;
    return d1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    dou y;

    cin >> x >> y;

    if ((x + 0.5) <= y && x % 5 == 0) {
        dou result = y - x - 0.5;
        cout << fixed << setprecision(2) << result << endl;
    }
    else
        cout << fixed << setprecision(2) << y << endl;

    return 0;
}
