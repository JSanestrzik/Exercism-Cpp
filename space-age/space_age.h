#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#define EXERCISM_RUN_ALL_TESTS

namespace space_age {
    class space_age {
    public:
        space_age(long seconds);

        long seconds() const;
        double on_mercury()const;
        double on_venus() const;
        double on_earth() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
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