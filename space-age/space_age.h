#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#define EXERCISM_RUN_ALL_TESTS

namespace space_age {
    class space_age {
    public:
        explicit space_age(long seconds);

        long seconds() const;

        constexpr double on_mercury() const
        {
            return  on_earth() / mEarthMercuryFactor;
        };

        constexpr double on_venus() const
        {
            return on_earth() / mEarthVenusFactor;
        };

        constexpr double on_earth() const
        {
            return (double)mSeconds/mEarthYearSeconds;
        };

        constexpr double on_mars() const
        {
            return on_earth() / mEarthMarssFactor;
        };

        constexpr double on_jupiter() const
        {
            return on_earth() / mEarthJupiterFactor;
        };

        constexpr double on_saturn() const
        {
            return on_earth() / mEarthSaturnFactor;
        };

        constexpr double on_uranus() const
        {
            return on_earth() / mEarthUranusFactor;
        };

        constexpr double on_neptune() const
        {
            return on_earth() / mEarthNeptuneFactor;
        };

    private:
        long mSeconds;

        const double mEarthYearSeconds = 31557600;
        const double mEarthMarssFactor = 1.8808158;
        const double mEarthMercuryFactor = 0.2408467;
        const double mEarthVenusFactor = 0.61519726;
        const double mEarthJupiterFactor = 11.862615;
        const double mEarthSaturnFactor = 29.447498;
        const double mEarthUranusFactor = 84.016846;
        const double mEarthNeptuneFactor = 164.79132;
    };
}  // namespace space_age

#endif // SP    ACE_AGE_H