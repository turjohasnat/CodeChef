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
        ll n;
        cin >> n;

        string s;
        cin >> s;

        sort(s.begin(), s.end());
        map<char, ll> m;
        for(char i : s)
            m[i]++;

        bool isOk = true;
        for(ll i = 0; i < n; i++){
            if(m[s[i]] >= 3){
                isOk = false;
                break;
            }
        }

        if(isOk)
            cout << "Yes" << el;
        else
            cout << "No" << el;

    }

    return 0;
}
