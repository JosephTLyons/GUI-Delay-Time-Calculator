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
    // N = Normal
    // D = Dotted
    // T = Triplet
    // v = Value (simply used because names can't start with a number)
    
    double wholeN;
    double wholeD;
    double wholeT;
    
    double halfN;
    double halfD;
    double halfT;
    
    double quarterN;
    double quarterD;
    double quarterT;
    
    double v8thN;
    double v8thD;
    double v8thT;
    
    double v16thN;
    double v16thD;
    double v16thT;
    
    double v32N;
    double v32ndD;
    double v32ndT;
    
    double v64thN;
    double v64thD;
    double v64thT;
    
    double v128thN;
    double v128thD;
    double v128thT;
    
public:
    Values();
    
    void calculateMilliseconds (const double &tempo);
    void calculateHertz (const double &tempo);
    
    double getWholeN() const;
    double getWholeD() const;
    double getWholeT() const;
    
    double getHalfN() const;
    double getHalfD() const;
    double getHalfT() const;
    
    double getQuarterN() const;
    double getQuarterD() const;
    double getQuarterT() const;
    
    double get8thN() const;
    double get8thD() const;
    double get8thT() const;
    
    double get16thN() const;
    double get16thD() const;
    double get16thT() const;
    
    double get32ndN() const;
    double get32ndD() const;
    double get32ndT() const;
    
    double get64thN() const;
    double get64thD() const;
    double get64thT() const;
    
    double get128thN() const;
    double get128thD() const;
    double get128thT() const;
};

#endif /* MillisecondsHertzValueBase */
