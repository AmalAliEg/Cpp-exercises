#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ofstream first_file("file1.txt");
    first_file <<"this is amal hello from the c-exercises repo.";
    first_file.close();

    return 0;
}