
#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String b;
    String a(4);
    String C("  priv    ");

    cout << C.getStr() << endl;
    //C.LeftTrim();
    //cout << C.getStr() << endl;
    //C.RightTrim();
    //cout << C.getStr() << "asd" << endl;
    C.Trim();
    cout << C.getStr() << "asd" << endl;
    C.Append(" asdasd");
    cout << C.getStr() << endl;
    C.Append(" asdasd");
    cout << C.getStr() << endl;

    String d("dsa");
   
    cout << C.EndsWith(d) << endl;


}

