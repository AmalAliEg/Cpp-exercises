#include <iostream>
using namespace std;

class Country
{
    public:
    string name;
    string capital;
    int num_population;
    
    //constructor no param.
    Country()
    {
        name="";
        capital="";
        num_population=0;
    }

     //constructor name .
    Country(string n)
    {
        name=n;
        capital="";
        num_population=0;
    }

    //constructor with name and capital .
    Country(string n, string c)
    {
        name=n;
        capital=c;
        num_population=0;
    }

    //constructor with inital values .
    Country(string n,string c, int p)
    {
        name=n;
        capital=c;
        num_population=p;
    }

    void printInfo()
        {
            cout << "name: " << name << endl;
            cout << "capital: " << capital << endl;
            cout << "num_population: " << num_population << endl;
            cout << "-------------------" << endl;
        }
};
int main ()
{
    Country one;
    Country two("Egypt");
    Country three("Saudi","Riyad");
    Country four("lebnon","bayrod",10000000);
    
    one.printInfo();
    two.printInfo();
    three.printInfo();
    four.printInfo();
        
    return 0;
}