//
//  MillisecondsHertzValueBase.hpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#ifndef MillisecondsHertzValueBase_hpp
#define MillisecondsHertzValueBase_hpp

class Values
{
private:
    double wholeNormal;
    double wholeDotted;
    double wholeTriplet;
    
    double halfNormal;
    double halfDotted;
    double halfTriplet;
    
    double quarterNormal;
    double quarterDotted;
    double quarterTriplet;
    
    double v8thNormal;
    double v8thDotted;
    double v8thTriplet;
    
    double v16thNormal;
    double v16thDotted;
    double v16thTriplet;
    
    double v32Normal;
    double v32ndDotted;
    double v32ndTriplet;
    
    double v64thNormal;
    double v64thDotted;
    double v64Triplet;
    
    double v128thNormal;
    double v128thDotted;
    double v128thTriplet;
    
public:
    Values();
    
    void calculateMilliseconds (const double &tempo);
    void calculateHertz (const double &tempo);
    
    double getWholeNormal() const;
    double getWholeDotted() const;
    double getWholeTriplet() const;
    
    double getHalfNormal() const;
    double getHalfDotted() const;
    double getHalfTriplet() const;
    
    double getQuarterNormal() const;
    double getQuarterDotted() const;
    double getQuarterTriplet() const;
    
    double get8thNormal() const;
    double get8thDotted() const;
    double get8thTriplet() const;
    
    double get16thNormal() const;
    double get16thDotted() const;
    double get16thTriplet() const;
    
    double get32ndNormal() const;
    double get32ndDotted() const;
    double get32ndTriplet() const;
    
    double get64thNormal() const;
    double get64thDotted() const;
    double get64thTriplet() const;
    
    double get128thNormal() const;
    double get128thDotted() const;
    double get128thTriplet() const;
};

#endif /* MillisecondsHertzValueBase */
