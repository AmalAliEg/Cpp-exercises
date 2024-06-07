#include <iostream>
using namespace std;

//create class nemd by car
class animal{
    
	public:
    //set methods 
    void set_animal_sound(void);
    
};

//implementation 

void animal ::set_animal_sound(void)
	{
		cout<<"the animal make a uniqe sound \n";
	}



class Dog :public animal 
{
    //attributes
    public:
    
    //set methods 
    void set_animal_sound(void){
        cout<<"the sound of dog is H-O-W ,,H-O-W  \n";
    }

};

class Cat :public animal
{
    public:
     //set methods 
    void set_animal_sound(void){
         cout<<"the sound of cat is M-E-W-O ,,M-E-W-O  \n";
    }
    
};


int main ()
{
animal animal1;
Dog dog1;
Cat cat1;
animal1.set_animal_sound();
dog1.set_animal_sound();
cat1.set_animal_sound();
    return 0;
}