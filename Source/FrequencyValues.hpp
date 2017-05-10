//
//  FrequencyValues.hpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#ifndef FrequencyValues_hpp
#define FrequencyValues_hpp

#include "MillisecondFrequencyValueBase.hpp"

class FrequencyValues : public MillisecondFrequencyValueBase
{
private:
    
public:
    void calculate(const double &input);
};

#endif /* FrequencyValues_hpp */
