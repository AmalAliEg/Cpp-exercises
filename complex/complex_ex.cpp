#include <iostream>
#include <cmath>
using namespace std;


class Complex
{
    float Real;
    float Img;
    public:
    //constructoor 
    Complex(){
        cout<<"new object allocated done\n ";
    }
    //destructor 
    ~Complex(){
        cout<<"new object de-allocated done\n ";
    }
    //setter 
    void SetReal(float x);
    void SetImg(float y);
    void SetComplex(float x,float y);
    //getter
    float GetReal(void);
    float GetImg(void);
    //method
    void Complex_Print();
    Complex AddComplex(Complex a);
    Complex SubComplex(Complex s);
};

void Complex ::SetReal(float x){
    Real=x;
}


void Complex ::SetImg(float y){
    Img=y;
}

void Complex:: SetComplex(float x,float y){
    Real=x;
    Img=y; 
}
float Complex ::GetReal(void){
    return Real;
}


float Complex ::GetImg(void){
    return Img;
}

void Complex:: Complex_Print(){
    if (Img<0)
    {
        cout<<"the complex repre. is "<<Real <<"-"<<fabs(Img)<<"i"<<endl;
    }
    else 
    {
        cout<<"the complex repre. is "<<Real <<"+"<<Img<<"i"<<endl;
    }

}

Complex Complex:: AddComplex(Complex a){
    Complex temp;
    temp.Real=Real+a.Real;
    temp.Img=Img+a.Img;
    return temp;
}
    Complex Complex:: SubComplex(Complex s){
    Complex temp;
    temp.Real=Real-s.Real;
    temp.Img=Img-s.Img;
    return temp;
    }

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