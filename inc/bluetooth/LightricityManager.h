#include "ManagedString.h"


class LightricityData{

  private:
    int vendorID;
    int sensorID;
    int beaconCounter;
    int MACAdress;
    int TXPower;
    int temperature;
    unsigned int pressure;
    int humidity;
    unsigned int lux ;
    unsigned int co2;
    struct {
        int x ;
        int y ;
        int z ;
    } acceleration;
    bool motion;
    bool button;
    unsigned int voltage ;
    bool error ;


  public:
    LightricityData(); //constructor

    void clearData();

    codal::ManagedString getTempString();


    //all getters and setters
    int getVendorID(){    return vendorID;}
    void setVendorID(int x){    vendorID = x;}
    int getSensorID(){    return sensorID;}
    void setSensorID(int x){    sensorID = x;}
    int getBeaconCounter(){    return beaconCounter;}
    void setBeaconCounter(int x){    beaconCounter = x;}
    int getMACAdress(){    return MACAdress;}
    void setMACAdress(int x){    MACAdress = x;}
    int getTXPower(){    return TXPower;}
    void setTXPower(int x){ TXPower = x;}
    int getTemp(){  return temperature;}
    void setTemp(int x){    temperature = x;}
    unsigned int getVoltage()   {return voltage;}
    void setVoltage(unsigned int x){    voltage = x;}
    unsigned int getPressure(){ return pressure;}
    void setPressure(unsigned int x){   pressure = x;}
    int getHumidity(){  return humidity;}
    void setHumidity(int x){    humidity = x;}
    unsigned int getLux(){  return lux;}
    void setLux(unsigned int x){    lux = x;}
    unsigned int getCO2(){  return co2;}
    void setCO2(unsigned int x){    co2 = x;}
    bool getMotion(){   return motion;}
    void setMotion(bool x){ motion = x;}
    bool getButton(){   return button;}
    void setButton(bool x){ button = x;}
    bool getError(){    return error;}
    void setError(bool x) { error = x;}


};