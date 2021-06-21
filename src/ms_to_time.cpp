#include "ms_to_time.h"

MsConverter::MsConverter(int ms)
{
    setTime(ms);
}

void MsConverter::setTime(int ms)
{
    unsigned long allSeconds = ms / 1000;
    hour = allSeconds / 3600;
    int secsRemaining = allSeconds % 3600;
    minute = secsRemaining / 60;
    second = secsRemaining % 60;
}

char *MsConverter::getTimeString()
{
    sprintf(time, "%02d:%02d:%02d", hour, minute, second);
    return time;
}