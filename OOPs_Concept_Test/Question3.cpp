#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
protected:
    string vehicleName;
    string color;
    string vehicleType;

public:
    void setVehicleName(string s)
    {
        vehicleName = s;
    }

    void setVehicleColor(string s)
    {
        color = s;
    }

    void setVehicleType(string s)
    {
        vehicleName = s;
    }

    string getVehicleType()
    {
        return vehicleType;
    }

    string getVehicleColor()
    {
        return color;
    }

    string getVehicleName()
    {
        return vehicleName;
    }
};

class Person
{
protected:
    string name;
    Vehicle VehicleName;
    Vehicle color;
    Vehicle type;

public:
    void setName(string s)
    {
        name = s;
    }

    string getName()
    {
        return name;
    }
    void getVehicle(Vehicle v)
    {
        this->VehicleName = v;
    }
    void getVehicle(Vehicle c)
    {
        this->color = c;
    }
    void getVehicle(Vehicle type)
    {
        this->type = type;
    }
};

int main()
{

    Person p;
    p.getName();
    return 0;
}