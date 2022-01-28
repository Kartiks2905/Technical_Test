#include <bits/stdc++.h>
using namespace std;
class Inverter
{
private:
    double current;
    double operatingVoltage;

public:
    Inverter()
    {
    }

    Inverter(double current, double operatingVoltage)
    {
        this->current = current;
        this->operatingVoltage = operatingVoltage;
    }

    double getCurrent()
    {
        return current;
    }

    void setCurrent(double current)
    {
        this->current = current;
    }

    double getOperatingVoltage()
    {
        return operatingVoltage;
    }

    void setOperatingVoltage(double operatingVoltage)
    {
        this->operatingVoltage = operatingVoltage;
    }

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

    SolarPanel(double energyProduced)
    {
        this->energyProduced = energyProduced;
    }

    double getEnergyProduced()
    {
        return energyProduced;
    }

    void setEnergyProduced(double energyProduced)
    {
        this->energyProduced = energyProduced;
    }

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

    void setVoltage(int voltage)
    {
        this->voltage = voltage;
    }

    Battery()
    {
    }

    Battery(int voltage)
    {
        this->voltage = voltage;
    }
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

    SolarInverter(double current, double operatingVoltage, SolarPanel solarPanel)
    {
        this->solarPanel = solarPanel;
    }

    SolarPanel getSolarPanel()
    {
        return solarPanel;
    }

    void setSolarPanel(SolarPanel solarPanel)
    {
        this->solarPanel = solarPanel;
    }

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

    Zelio(double current, double operatingVoltage, Battery battery)
    {

        this->battery = battery;
    }

    Battery getBattery()
    {
        return battery;
    }

    void setBattery(Battery battery)
    {
        this->battery = battery;
    }

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

    ICruz(double current, double operatingVoltage, Battery battery)
    {

        this->battery = battery;
    }

    Battery getBattery()
    {
        return battery;
    }

    void setBattery(Battery battery)
    {
        this->battery = battery;
    }

    void getDetails()
    {

        this->getDetails();
    }
};

class PCU : public SolarInverter
{
private:
    bool gridSystem = false;

    Battery battery;

public:
    PCU()
    {
    }

    PCU(double current, double operatingVoltage, SolarPanel solarPanel, Battery battery)
    {

        this->battery = battery;
    }

    Battery getBattery()
    {
        return battery;
    }

    void setBattery(Battery battery)
    {
        this->battery = battery;
    }

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

    Regalia(double current, double operatingVoltage, SolarPanel solarPanel)
    {
        //this->getOperatingVoltage;
    }

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

    GTI(double current, double operatingVoltage, SolarPanel solarPanel)
    {
        //this->current;
    }

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