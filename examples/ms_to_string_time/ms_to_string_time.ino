#include "ms_to_time.h"

MsConverter time(millis());

void setup()
{
    Serial.begin(9600);

    time.setTime(millis());

    String strTime = time.getTimeString();

    Serial.println(strTime);
}

void loop()
{
}