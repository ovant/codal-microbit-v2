#include "ManagedString.h"

class LightricityData{

  private:
    int vendorID;
    int sensorID;
    int beaconCounter;
    int MACAdress;
    int TXPower;
    int temperature;            //degrees C, devide by 100 to get real value
    unsigned int pressure;      //Pa
    int humidity;               //%rh, divide by 100 to get real value
    unsigned int lux ;          //lux
    unsigned int co2;           //ppm
    struct {
        int x ;
        int y ;
        int z ;
    } acceleration;             //mg
    bool motion;
    bool button;
    unsigned int voltage ;      //mV
    bool error ;


  public:
    LightricityData(); //constructor

    void clearData();

    codal::ManagedString getTempString();
    codal::ManagedString getHumidityString();
    codal::ManagedString getVoltageString();
    codal::ManagedString getPressureString();
    codal::ManagedString getLuxString();
    codal::ManagedString getCO2String();
    //all others can be displayed on the microbit directly with the get fuction without explicit string conversion


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
    int getAccX(){ return acceleration.x;}
    int getAccY(){ return acceleration.y;}
    int getAccZ(){ return acceleration.z;}
    //sets x,y,z. pass NULL if they remain unchanged. to enable setting them to 0, pass reset as true
    void setAcc(int x, int y, int z, bool reset = false){ 
      if(reset){
        acceleration.x = x;
        acceleration.y = y;
        acceleration.z = z;
      }
      else{
        if(x) acceleration.x = x;
        if(y) acceleration.y = y;
        if(z) acceleration.z = z;
      }
    }

};
