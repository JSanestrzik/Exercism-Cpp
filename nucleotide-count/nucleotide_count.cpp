#include "nucleotide_count.h"

namespace nucleotide_count {

    std::map<char, int> counter::nucleotide_counts() const {
        return {{mAdenineKey, count(mAdenineKey)},
                {mThymineKey, count(mThymineKey)},
                {mCytosineKey, count(mCytosineKey)},
                {mGuanineKey, count(mGuanineKey) }};
    };

}  // namespace nucleotide_count
