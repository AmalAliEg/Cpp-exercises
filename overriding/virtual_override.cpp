#include <iostream>
using namespace std;

//create class nemd by car
class country{
    
	public:
    //set methods 
    virtual void language(void){
		cout <<"the language in this country \n";
	}
    virtual void capital(void){
		cout<<"the capital \n";
	}
};

class egypt :public country
{
	public:
	void language(void)  override
	{
		cout <<"the language in this country is arabic specific egyption \n";
	}
    void capital(void) override
	{
		cout<<"the capital is cairo\n";
	}
};

int main ()
{

/*country one;
one.language();
one.capital();
*/
egypt obj;
obj.language();
obj.capital();

    return 0;
}