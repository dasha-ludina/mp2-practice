#include <iostream>
#include <string>
#include "Polinom.h"

using namespace std;

int main()
{
    try
    {
        string s, s1;
        getline(cin, s);
        Polinom pol(s);
        getline(cin, s1);
        Polinom pol1(s1);
        cout << "Polinom + Polinom:" << endl;
        cout << pol + pol1 << endl;
        cout << "Polinom - Polinom:" << endl;
        cout << pol - pol1 << endl;
        cout << "Polinom * Polinom:" << endl;
        cout << pol * pol1 << endl;
    }
    catch (const char* ex)
    {
        cout << ex << endl;
    }
    system("pause");
}