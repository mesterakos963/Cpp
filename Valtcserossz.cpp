#include <iostream>

using namespace std;

int main()
{
    //2 v�ltoz� �rt�kenek cser�je seg�dv�ltoz� n�lk�l

    int a = 7;
    int b = 1;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a=" << a << endl << "b=" << b << endl;

    return 0;
}
