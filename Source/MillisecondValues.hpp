//
//  MillisecondValues.hpp
//  Delay Time Calculator
//
//  Created by Joseph Lyons on 4/14/17.
//
//

#ifndef MillisecondValues_hpp
#define MillisecondValues_hpp

#include "MillisecondsHertzValueBase.hpp"

class MillisecondValues : public MillisecondsHertzValueBase
{
private:
    
public:
    void calculateMillisecondValues(const double &input);
};

#endif /* MillisecondValues_hpp */
