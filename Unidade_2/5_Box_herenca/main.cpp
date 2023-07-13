#include "cartoon.hpp"

int main()
{
    Box b1;
    Box b2(10, 20, 30);
    Cartoon b3;
    Cartoon b4(30, 20, 10, 60);

    b1.ShowInfo();
    b2.ShowInfo();
    b3.ShowInfo();
    b4.ShowInfo();

    return 0;
}
