#include "space_age.h"

namespace space_age {

    space_age::space_age(long seconds): mSeconds(seconds) {}

    long space_age::seconds() const
    {
        return mSeconds;
    }
}  // namespace space_age
