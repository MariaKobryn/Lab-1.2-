#include <iostream>
#include "Ìàòğèöÿ.h"

using namespace std;

int main()
{
    Ìàòğèöÿ m;
    m.Init(8, 4);
    m.display();
    cout << endl;
    cout << m.getValueByIndex(4, 2) << endl;
    cout << endl;
    m.multiplyÌàòğèöÿByNumber(2);
    m.display();
}
