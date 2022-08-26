#include "LightricityManager.h"
#include "ManagedString.h"
// #include <stdlib.h>

LightricityData::LightricityData()
{
    vendorID = 0;
    sensorID = 0;
    beaconCounter = 0;
    MACAdress = 0;
    TXPower = 0;
    temperature = 0;
    pressure = 0;
    humidity = 0;
    lux = 0;
    co2 = 0;
    acceleration.x = 0;
    acceleration.y = 0;
    acceleration.z = 0;
    motion = false;
    button = false;
    voltage = 0;
    error = false;
}

void LightricityData::clearData(){
    vendorID = 0;
    sensorID = 0;
    beaconCounter = 0;
    MACAdress = 0;
    TXPower = 0;
    temperature = 0;
    pressure = 0;
    humidity = 0;
    lux = 0;
    co2 = 0;
    acceleration.x = 0;
    acceleration.y = 0;
    acceleration.z = 0;
    motion = false;
    button = false;
    voltage = 0;
    error = false;
}

codal::ManagedString LightricityData::getTempString(){
    
    return codal::ManagedString(temperature/100) + codal::ManagedString('.') + codal::ManagedString(temperature%100);
}




//helper function to turn unsigned int to char array
void uitoa(unsigned int n, char *s)
{
    int i = 0;

    // Calculate each character, starting with the LSB.
    do {
         s[i++] = (n % 10) + '0';
    } while ((n /= 10) > 0);


    // Terminate the string.
    s[i] = '\0';

    // Flip the order.
    codal::string_reverse(s);

}

codal::ManagedString makeStringFromU(unsigned int x){
    char str[12];
    uitoa(x,str);
    return codal::ManagedString(str);
}

codal::ManagedString LightricityData::getHumidityString(){
    
    return makeStringFromU(humidity/100) + codal::ManagedString('.') + makeStringFromU(humidity%100);
}


codal::ManagedString LightricityData::getVoltageString(){
    return makeStringFromU(voltage);
}

codal::ManagedString LightricityData::getPressureString(){
    return makeStringFromU(pressure);

}
codal::ManagedString LightricityData::getLuxString(){
    return makeStringFromU(lux);
}
codal::ManagedString LightricityData::getCO2String(){
    return makeStringFromU(co2);
}


