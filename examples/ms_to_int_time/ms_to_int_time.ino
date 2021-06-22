#include "ms_to_time.h"

MsConverter time(millis());

void setup()
{
    Serial.begin(9600);

    time.setTime(millis());

    int hour = time.getHour();
    int minute = time.getMinute();
    int second = time.getSecond();

    Serial.println(hour);
    Serial.println(minute);
    Serial.println(second);
}

void loop()
{
}