
#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String b;
    String a(4);
    String C("priv");

    C.Append(" df");
    //C.Reverse();
    cout << C.getStr() << endl;
    cout << C.EndsWith(" d") << endl;
}

