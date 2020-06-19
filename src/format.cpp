#include <string>
#include <iostream>
#include <iomanip>

#include "format.h"

using std::string;
using std::to_string;
// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    int hour, minutes, secs;
    hour= seconds/3600;
    minutes=seconds/60-hour*60;
    secs= seconds-hour*3600-minutes*60;
    
    std::stringstream time{};

    time << std::setw(2) << std::setfill('0') << to_string(hour) << std::setw(1) << ":" << std::setw(2) << std::setfill('0') << to_string(minutes) << std::setw(1) << ":" << std::setw(2) << std::setfill('0') << to_string(secs); 

    return time.str();

}