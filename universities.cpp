#include <iostream>

long long factorial(long long n, long long k) {
    long long ans = 1;
    for (long long i = n - k + 1; i <= n; ++i) {
        ans *= i;
    }

    return ans;
}

bool f(long long x) {
    for (int n = 2; n <= x; ++n) {
        for (int k = 1; k <= n; ++k) {
            long long a = factorial(n, k);
            if (a > x) break;
            if (a == x) {
                std::cout << n << " " << k << std::endl;
                return true;
            }
        }
    }

    return false;
}

int main() {
    long long t, x;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        std::cin >> x;

        if (x == 1) {
            std::cout << 1 << " " << 1 << std::endl;
            continue;
        }

        if (!f(x)) {
            std::cout << -1 << " " << -1 << std::endl;
        }

    }

    return 0;
}