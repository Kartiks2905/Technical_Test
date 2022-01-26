#include <bits/stdc++.h>
using namespace std;
class MP
{
protected:
    int spending_limit;
    bool car;
    string role;
    bool driver;
    bool constitution;

public:
    MP()
    {
        this->spending_limit = 100000;
        this->car = true;
        this->role = "MP";
        this->driver = true;
        this->constitution = true;
    }
    string getRole()
    {
        return this->role;
    }

    bool getDriver()
    {
        return this->driver;
    }

    bool getConstitution()
    {
        return this->constitution;
    }
};

class Minister : public MP
{
public:
    Minister()
    {
        this->spending_limit = 1000000;
        this->car = true;
        this->role = "Minister";
        this->driver = true;
        this->constitution = "fasle";
    }
};

class PM : public MP
{
private:
    bool aircraft;
    bool driver;

public:
    PM()
    {
        this->spending_limit = 10000000;
        this->car = true;
        this->aircraft = true;
        this->driver = true;
        this->role = "PM";
    }
};

class Commisioner
{
public:
    void arrest(MP mp)
    {
        if (mp.getRole() == "MP")
        {
            cout << "Arrested" << endl;
        }
        else if (mp.getRole() == "Minister")
        {
            cout << "Need PM Permission" << endl;
        }
        else
        {
            cout << "PM can't be arrested" << endl;
        }
    }
};

int main()
{
    Commisioner c;
    MP mp;
    PM pm;
    Minister min;
    c.arrest(mp);
    c.arrest(min);
    c.arrest(pm);
}