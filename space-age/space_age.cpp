#include "space_age.h"

namespace space_age {

    space_age::space_age(long seconds): mSeconds(seconds) {}

    long space_age::seconds() const
    {
        return mSeconds;
    }

    double space_age::on_mercury() const
    {
        return  on_earth() / mEarthMercuryFactor;
    }

    double space_age::on_venus() const
    {
        return on_earth() / mEarthVenusFactor;
    }

    double space_age::on_earth() const
    {
        return (double)mSeconds/mEarthYearSeconds;
    }

    double space_age::on_mars() const
    {
        return on_earth() / mEarthMarssFactor;
    }

    double space_age::on_jupiter() const
    {
        return on_earth() / mEarthJupiterFactor;
    }

    double space_age::on_saturn() const
    {
        return on_earth() / mEarthSaturnFactor;
    }

    double space_age::on_uranus() const
    {
        return on_earth() / mEarthUranusFactor;
    }

    double space_age::on_neptune() const
    {
        return on_earth() / mEarthNeptuneFactor;
    }
}  // namespace space_age
