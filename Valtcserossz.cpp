#include <iostream>

using namespace std;

int main()
{
    //2 változó értékenek cseréje segédváltozó nélkül

    int a = 7;
    int b = 1;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a=" << a << endl << "b=" << b << endl;

    return 0;
}
