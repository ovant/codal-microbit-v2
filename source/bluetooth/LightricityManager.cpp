#include "LightricityManager.h"
#include "ManagedString.h"

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


