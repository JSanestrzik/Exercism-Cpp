#include "sieve.h"
#include <algorithm>
#include <numeric>

namespace sieve {

    static const int begining_value = 2;

    std::vector<int> primes(int limit) {
        if (limit < 2) {
            return {};
        }

        std::vector<int> primes(limit - 1);
        std::iota(primes.begin(), primes.end(), begining_value);

        for (auto it = primes.begin(); it != primes.end(); it++) {
            primes.erase(std::remove_if(it+1, primes.end(), [&it](int value) { return value % *it == 0; }),
                    primes.end());
        }

        return primes;
    }
}  // namespace sieve
