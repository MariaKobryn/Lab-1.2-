#include <iostream>
#include "�������.h"

using namespace std;

int main()
{
    ������� m;
    m.Init(8, 4);
    m.display();
    cout << endl;
    cout << m.getValueByIndex(4, 2) << endl;
    cout << endl;
    m.multiply�������ByNumber(2);
    m.display();
}
