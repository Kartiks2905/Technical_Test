#include <bits/stdc++.h>
using namespace std;
class Inverter
{
private:
    double current;

private:
    double operatingVoltage;

public:
    Inverter()
    {
    }

public:
    Inverter(double current, double operatingVoltage)
    {
        this->current = current;
        this->operatingVoltage = operatingVoltage;
    }

public:
    double getCurrent()
    {
        return current;
    }

public:
    void setCurrent(double current)
    {
        this->current = current;
    }

public:
    double getOperatingVoltage()
    {
        return operatingVoltage;
    }

public:
    void setOperatingVoltage(double operatingVoltage)
    {
        this->operatingVoltage = operatingVoltage;
    }

public:
    void getDetails()
    {
        double powerRating = current * operatingVoltage;
        cout << powerRating;
    }
};

class SolarPanel
{
private:
    double energyProduced;

public:
    SolarPanel()
    {
    }

public:
    SolarPanel(double energyProduced)
    {
        this->energyProduced = energyProduced;
    }

public:
    double getEnergyProduced()
    {
        return energyProduced;
    }

public:
    void setEnergyProduced(double energyProduced)
    {
        this->energyProduced = energyProduced;
    }

public:
    void getDetails()
    {
        cout << energyProduced;
    }
};

class Battery
{
private:
    int voltage;

public:
    int getVoltage()
    {
        return voltage;
    }

public:
    void setVoltage(int voltage)
    {
        this->voltage = voltage;
    }

public:
    Battery()
    {
    }

public:
    Battery(int voltage)
    {
        this->voltage = voltage;
    }

public:
    void getDetails()
    {
        cout << "This is " << voltage << " battery";
    }
};

class SolarInverter : public Inverter
{
private:
    SolarPanel solarPanel;

public:
    SolarInverter()
    {
    }

public:
    SolarInverter(double current, double operatingVoltage, SolarPanel solarPanel)
    {
        this->solarPanel = solarPanel;
    }

public:
    SolarPanel getSolarPanel()
    {
        return solarPanel;
    }

public:
    void setSolarPanel(SolarPanel solarPanel)
    {
        this->solarPanel = solarPanel;
    }

public:
    void getDetails()
    {
        solarPanel.getDetails();
    }
};

class Zelio : public Inverter
{
private:
    Battery battery;

public:
    Zelio()
    {
    }

public:
    Zelio(double current, double operatingVoltage, Battery battery)
    {

        this->battery = battery;
    }

public:
    Battery getBattery()
    {
        return battery;
    }

public:
    void setBattery(Battery battery)
    {
        this->battery = battery;
    }

public:
    void getDetails()
    {
        battery.getDetails();
    }
};

class ICruz : public Inverter
{
private:
    Battery battery;

public:
    ICruz()
    {
    }

public:
    ICruz(double current, double operatingVoltage, Battery battery)
    {

        this->battery = battery;
    }

public:
    Battery getBattery()
    {
        return battery;
    }

public:
    void setBattery(Battery battery)
    {
        this->battery = battery;
    }

public:
    void getDetails()
    {

        this->getDetails();
    }
};

class PCU : public SolarInverter
{
private:
    bool gridSystem = false;

private:
    Battery battery;

public:
    PCU()
    {
    }

public:
    PCU(double current, double operatingVoltage, SolarPanel solarPanel, Battery battery)
    {

        this->battery = battery;
    }

public:
    Battery getBattery()
    {
        return battery;
    }

public:
    void setBattery(Battery battery)
    {
        this->battery = battery;
    }

public:
    void getDetails()
    {

        battery.getDetails();
        cout << this->getSolarPanel().getEnergyProduced();
        cout << "GridOn feature is not available..";
    }
};

class Regalia : public SolarInverter
{
public:
    Regalia()
    {
    }

public:
    Regalia(double current, double operatingVoltage, SolarPanel solarPanel)
    {
        //this->getOperatingVoltage;
    }

public:
    void getDetails()
    {
        this->getDetails();
    }
};

class GTI : public SolarInverter
{
private:
    bool gridSystem = true;

public:
    GTI()
    {
    }

public:
    GTI(double current, double operatingVoltage, SolarPanel solarPanel)
    {
        //this->current;
    }

public:
    void getDetails()
    {

        cout << "GridOn feature available..";
    }
};

int main()
{

    // PCU inverter
    PCU inverterPCU;
    //inverterPCU = (12, 12, new SolarPanel(200.0), new Battery(20));
    inverterPCU.getDetails();

    return 0;
}