#include <cstdint>

#include "lib.h"

float convert_milliseconds_to_seconds(const float milliseconds)
{

    return milliseconds/1000.0F;
}

float convert_seconds_to_minutes(const float seconds)
{
    return seconds/60.0F;
}

float convert_minutes_to_hours(const float minutes)
{
    return minutes/60.F;
}

float convert_milliseconds_to_minutes(const float milliseconds)
{

    return convert_seconds_to_minutes(convert_milliseconds_to_seconds(milliseconds));
}


float convert_milliseconds_to_hours(const float milliseconds)
{
    float minutes =  convert_milliseconds_to_minutes(milliseconds);
    float hours = convert_milliseconds_to_hours(milliseconds);
    return hours;
}

float convert_seconds_to_hours(const float seconds)
{
    float minutes= convert_minutes_to_hours(seconds);
    return convert_minutes_to_hours(minutes);
}
