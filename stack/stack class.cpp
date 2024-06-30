#include <iostream>
#include <cmath>
using namespace std;


class Stack
{
    //size of stack
    int size ;
    //pointer to int
    int * ptr;
    //top of stack
    int top;
    public:
    //public constructor to set size of stack 

    Stack(int x=10){
        size =x;
        top=0;
        ptr= new int[size]; //create dynamic array
    }   
    ~Stack(){  delete [] ptr;}

    //main methods 
    void push(int x){
        if (top==size)
        {
            cout <<"stack full \n";

        }
        else 
        {
            
        }

    }
    int pop(void){

    }

};


int main ()
{
    
    Complex obj1,obj2,res;
    obj1.SetComplex(6,5);
    //obj1.Complex_Print();
    obj2.SetComplex(2,-6);
    res=obj1.AddComplex(obj2);
    res.Complex_Print();

        
    return 0;
}