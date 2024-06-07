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


class Driver :public Car
{
    //attributes
    public:
    string Driver_name;
    //set methods 
    void Set_Driver_name(string d){
        Driver_name=d;
    }
    //get methods 
    string Get_Driver_Name(void)
    {
        return Driver_name;
    }
};

class Grand_Child :public Driver
{
    public:
    int Num_of_members;
     //set methods 
    void Set_passengers_Num(int p){
        Num_of_members=p;
    }
    //get methods 
    int Get_passengers_Num(void)
    {
        return Num_of_members;
    }
};


int main ()
{
Grand_Child child1;
child1.Set_Driver_name("gasser");
child1.set_name("volvo");
child1.set_type("sport");
child1.set_year(2024);
child1.Set_passengers_Num(4);

cout << "the name is "<< child1.Get_Driver_Name()<<endl;
cout << "the name is "<< child1.get_name()<<endl;
cout << "the type is "<< child1.get_type()<<endl;
cout << "the year is "<<child1.get_year()<<endl;
cout << "the year is "<<child1.Get_passengers_Num()<<endl;

    return 0;
}