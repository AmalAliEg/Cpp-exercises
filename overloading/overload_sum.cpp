#include <iostream>
using namespace std;

int sum (int x, int y){
    return x+y;

}

double sum (double x, double y){
    return x+y;
    
}
int main ()
{

    cout <<sum(6,8)<<endl;
    cout <<sum(6.9,8.5)<<endl;
    
    return 0;
}