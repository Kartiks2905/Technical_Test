// {
//    "firstName":"John",
//    "lastName":"Smith",
//    "age":25,
//    "address":{
//       "streetAddress":"21 2nd Street",
//       "city":"New York",
//       "state":"NY",
//       "postalCode":10021
//    },
//    "phoneNumbers":[
//       {
//          "type":"home",
//          "number":"212 555-1234"
//       },
//       {
//          "type":"fax",
//          "number":"646 555-4567"
//       }
//    ]
// }

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string firstName;
    string lastName;
    int age;
    Address address;
    vector<PhoneNumber> phoneNumber;
};
class Address
{
public:
    string streetAddress;
    string city;
    string state;
    int PostalCode;
};
class PhoneNumber
{
public:
    string type;
    int number;
};