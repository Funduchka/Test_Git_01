#include <iostream>
#include "MyLib01.h"
#include "LibDasha.h"

using namespace std;

int main()
{
    PrintSergey_01();
    PrintSergey_02();
    PrintSergey_03();
    PrintDasha_01();
    PrintDasha_02();
    PrintDasha_Experimental();
    PrintSergey_04();

    cout << "MySq(5) = " << MySq(5) << endl; // 3 --> 4 --> 5
    cout << "Hello" << endl;


    return 0;
}
