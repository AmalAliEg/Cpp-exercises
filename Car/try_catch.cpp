#include <iostream>

using namespace std;

int main ()
{
    int age =15;
    try 
    {
        if (age >18)
        {
            cout <<"this is fine u r grantee to enter\n";
        }

        else
        { 
            throw 505;
        }

    }

    catch (...)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << age;
    }


    return 0;
}