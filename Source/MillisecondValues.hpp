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
public:
    void calculateValues (const double &input) override;
};

#endif /* MillisecondValues_hpp */
