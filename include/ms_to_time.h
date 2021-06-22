#ifndef MS_TO_TIME_H
#define MS_TO_TIME_H
#include <Arduino.h>

class MsConverter
{
private:
    int hour;
    int minute;
    int second;
    char time[20];

public:
    MsConverter(int ms);
    void setTime(int ms);
    int getHour() { return hour; }
    int getMinute() { return minute; }
    int getSecond() { return second; }
    char *getTimeString();
};

#endif