#include <iostream>
using namespace std;

int sum (int x, int y){
    return x+y;

}

int sum (int x, int y, int z){
    return x+y+z;

}
int main ()
{

    cout <<sum(6,4)<<endl;
    cout <<sum(6,7,55)<<endl;
    
    return 0;
}