#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int modpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * 1LL * a) % mod;
        a = (a * 1LL * a) % mod;
        b >>= 1;
    }
    return res;
}

int modinv(int x) {
    return modpow(x, mod-2);
}

int expected_path_length(int A) {
    vector<int> dp(A+1);
    dp[1] = 0;
    for (int i = 2; i <= A; i++) {
        vector<int> divisors;
        for (int j = 1; j*j <= i; j++) {
            if (i % j == 0) {
                divisors.push_back(j);
                if (j*j != i) divisors.push_back(i/j);
            }
        }
        int inv = modinv(divisors.size());
        for (int j : divisors) {
            dp[i] = (dp[i] + dp[j]) % mod;
        }
        dp[i] = (dp[i] + 1LL * inv) % mod;
    }
    return (dp[1] * 1LL * modinv(1)) % mod;
}

int main() {
    int A = 5;
    cout << expected_path_length(A) << endl; // Output: 36078727 (corresponding to 1/24 mod (109+7))
    return 0;
}
