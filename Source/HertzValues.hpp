//
//  HertzValues.hpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#ifndef HertzValues_hpp
#define HertzValues_hpp

#include "MillisecondsHertzValueBase.hpp"

class HertzValues : public MillisecondsHertzValueBase
{
public:
    ~HertzValues();
    void calculateValues (const double &tempo) override;
};

#endif /* HertzValues_hpp */
