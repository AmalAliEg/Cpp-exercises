#include <iostream>
using namespace std;

//create class nemd by car
class Car{
    // attributes
	private:
   	string name;
    string type;
    int year;

	public:
    //set methods 
    void set_name(string x);
    void set_type(string y);
    void set_year(int z);
    //get_methods
    string get_name(void);
    string get_type(void);
    int get_year(void);
};

//implementation 

void Car ::set_name(string x)
	{
		name = x;
	}

void Car ::set_type(string y)
 	{
		type = y;  
	}
void Car ::set_year(int z)
	{
		year = z;
	}


string Car::get_name(void)
	{
		return name;
	}
 
string Car::get_type(void)
	{
		return type;
	}

int Car::get_year(void)
	{
		return year;
    }

int main ()
{
Car car1;
car1.set_name("volvo");
car1.set_type("sport");
car1.set_year(2024);

cout << "the name of the car is "<< car1.get_name()<<endl;
cout << "the type of the car is "<< car1.get_type()<<endl;
cout << "the year is "<<car1.get_year()<<endl;

    return 0;
}