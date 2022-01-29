#include <bits/stdc++.h>
using namespace std;
class Box
{
public:
    double length, height, width, area, gsm;
    bool pins, pasting, singlepart, doublepart;
    string fluteType;
    int extraGsm;

    int findArea()
    {
        return length * width * height;
    }

    int getGSM()
    {
        return gsm;
    }
    void getExtraGsm()
    {
        if (fluteType == "A")
        {
            extraGsm = 10;
        }
        else if (fluteType == "B")
        {
            extraGsm = 30;
        }
        else if (fluteType == "C")
        {
            extraGsm = 20;
        }
        else if (fluteType == "E")
        {
            extraGsm = 40;
        }
        else if (fluteType == "F")
        {
            extraGsm = 50;
        }
        else if (fluteType == "20")
        {
            extraGsm = 20;
        }
    }
    int gettotalGSM()
    {
        return extraGsm + gsm * 100;
    }
};
class Universal : public Box
{
public:
    bool pasting;
    bool pin;
    int stitchingCost;

    Universal()
    {
        if (this->pasting == true && this->pin == true)
        {
            stitchingCost = 30;
        }
        else if (this->pasting == true)
        {
            stitchingCost = 20;
        }
        else if (this->pin == true)
        {
            stitchingCost = 10;
        }
    }

    void getCost()
    {
        if (doublepart == true)
        {
            cout << "Cost is:-> " << 3 * (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
        else
        {
            cout << "Cost is:-> " << (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
    }
};

class AllFlapMeeting : public Box
{
public:
    bool pasting;
    bool pin;
    int stitchingCost;

    AllFlapMeeting()
    {
        if (this->pasting == true && this->pin == true)
        {
            stitchingCost = 40;
        }
        else if (this->pasting == true)
        {
            stitchingCost = 30;
        }
        else if (this->pin == true)
        {
            stitchingCost = 10;
        }
    }

    void getCost()
    {
        if (doublepart == true)
        {
            cout << "Cost is:-> " << 3 * (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
        else
        {
            cout << "Cost is:-> " << (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
    }
};

class HoneyComb : public Box
{
public:
    bool pasting;
    bool pin;
    int stitchingCost;

    HoneyComb()
    {
        if (this->pasting == true && this->pin == true)
        {
            stitchingCost = 50;
        }
        else if (this->pasting == true)
        {
            stitchingCost = 40;
        }
        else if (this->pin == true)
        {
            stitchingCost = 10;
        }
    }
    void getCost()
    {
        if (doublepart == true)
        {
            cout << "Cost is:-> " << 3 * (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
        else
        {
            cout << "Cost is:-> " << (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
    }
};

class ReverseTuckIn : public Box
{
public:
    bool pasting;
    bool pin;
    int stitchingCost;

    ReverseTuckIn()
    {
        if (this->pasting == true && this->pin == true)
        {
            stitchingCost = 50;
        }
        else if (this->pasting == true)
        {
            stitchingCost = 40;
        }
        else if (this->pin == true)
        {
            stitchingCost = 10;
        }
    }

    void getCost()
    {
        if (doublepart == true)
        {
            cout << "Cost is:-> " << 3 * (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
        else
        {
            cout << "Cost is:-> " << (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
    }
};

class TopOpeningSnapLock : public Box
{
public:
    bool pasting;
    bool pin;
    int stitchingCost;

    TopOpeningSnapLock()
    {
        if (this->pasting == true && this->pin == true)
        {
            stitchingCost = 60;
        }
        else if (this->pasting == true)
        {
            stitchingCost = 50;
        }
        else if (this->pin == true)
        {
            stitchingCost = 10;
        }
    }
    void getCost()
    {
        if (doublepart == true)
        {
            cout << "Cost is:-> " << 3 * (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
        else
        {
            cout << "Cost is:-> " << (findArea() * gettotalGSM() * extraGsm * stitchingCost);
        }
    }
};