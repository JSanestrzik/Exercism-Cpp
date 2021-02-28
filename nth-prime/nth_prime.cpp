#include "nth_prime.h"
#include <stdexcept>
#include <vector>

namespace nth_prime {
    int nth(int n) {
        if (n <= 0) {
            throw std::domain_error("The n-th prime value can't be 0 or less");
        }

        std::vector<int> primes = { 2 };
        int val = primes.back();
        while ((int)primes.size() < n) {
            bool is_prime = true;
            for (auto p : primes) {
                is_prime = is_prime && (val % p != 0);
            }
            if (is_prime) {
                primes.push_back(val);
            }
            val++;
        }

        return primes.back();
    }
}  // namespace nth_prime
