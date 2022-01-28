#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
    virtual void run();
};
class Car : public Vehicle
{
private:
    string name;
    string model;
    string color;
    int tyres = 4;

    Car()
    {
    }

public:
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }

    string getModel()
    {
        return model;
    }
    void setModel(string model)
    {
        this->model = model;
    }
    string getColor()
    {
        return color;
    }

    void setColor(string color)
    {
        this->color = color;
    }
    int getTyres()
    {
        return tyres;
    }
    void run()
    {
        cout << "Runs";
    }
    Car(string name, string model, string color)
    {
        this->name = name;
        this->model = model;
        this->color = color;
    }
};
class Bike : public Vehicle
{
private:
    string name;
    string color;
    string model;
    int tyres = 2;
    Bike()
    {
    }

public:
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getColor()
    {
        return color;
    }
    void setColor(string color)
    {
        this->color = color;
    }
    string getModel()
    {
        return model;
    }
    void setModel(string model)
    {
        this->model = model;
    }

    int getTyres()
    {
        return tyres;
    }
    void run()
    {
        cout << "Runs at medium speed..";
    }

    Bike(string name, string model, string color)
    {
        this->name = name;
        this->model = model;
        this->color = color;
    }
};
class Person
{
    string name;
    string age;
    vector<Vehicle> vehicles; // has a relationship
    Person()
    {
    }

public:
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    Person(string name, string age, vector<Vehicle> vehicles)
    {
        this->name = name;
        this->age = age;
        this->vehicles = vehicles;
    }

    string getAge()
    {
        return age;
    }

    void setAge(string age)
    {
        this->age = age;
    }

    vector<Vehicle> getVehicles()
    {
        return vehicles;
    }
    void setVehicles(vector<Vehicle> vehicles)
    {
        this->vehicles = vehicles;
    }
};