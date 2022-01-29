#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string name;

public:
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getAge()
    {
        return age;
    }

    void setAge(string age)
    {
        this->age = age;
    }
    string age;
};
class Item
{
public:
    double price;
    double discount;

    double getPrice()
    {
        return price;
    }

    double getDiscount()
    {
        return discount;
    }
};
class VegetableBill : public Item
{
public:
    Employee employee;
    Item item;
    double total;
    vector<string> items;

    void add()
    {
        item += 1;
    }

    double getTotal()
    {
        return total;
    }

    void printReceipt()
    {
        for (auto iterator : items)
        {
            cout << iterator << endl;
        }
    }
};
class DiscountBill : public VegetableBill
{
private:
    int discountItem;
    double discount;
    bool preferred;

    DiscountBill(Employee clerk, bool preferred)
    {
        Employee(clerk);
        this->preferred = preferred;
        discountItem = 0;
        discount = 0.0;
    }
    void add(Item i)
    {
        if (preferred && i.getDiscount() > 0)
        {
            discountItem++;
            discount += i.getDiscount();
        }
    }

    int getDiscountCount()
    {
        return discountItem;
    }

    double getDiscountAmount()
    {
        return discount;
    }

    double getTotal()
    {
        VegetableBill.getTotal() - discount;
    }

    double getDiscountPercent()
    {
        return discount * 100 / VegetableBill.getTotal();
    }
};